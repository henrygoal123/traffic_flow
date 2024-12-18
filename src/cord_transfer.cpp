#include <iostream>
#include "cord_transfer.h"

const double MPI = 3.141592653589;
const double roudu = 57.2957795130823210;
const double roufen = 3437.74677078493917;
const double roumiao = 206264.8062470963551565;
const double WGS84_a = 6378137.0;
const double WGS84_e = 0.003352810664;
const double WGS84_b = WGS84_a - WGS84_a * WGS84_e;
const double WGS84_c = 6399593.6258;
const double WGS84_e2 = 0.0066943799013;
const double WGS84_epie2 = 0.00673949674227;
const double MERCATOR_LON_MAX = 180.0;
const double MERCATOR_LAT_MAX = 85.05112878;
Eigen::Vector3d Cord_Transfer::Lonlat2Global(double &x, double &y, double &z) {
  const double METER_PER_DEGREE = WGS84_a * MPI / 180.0;
  double lon = x;
  double lat = y;
  double h = z;
  double phi = lat / roudu;
  double lam = lon / roudu;
  double sphi = sin(phi);
  double cphi = abs(lat) == 90 ? 0 : cos(phi);
  double n = WGS84_a / sqrt(1 - WGS84_e2 * sphi * sphi);
  double slam = lon == -180 ? 0 : sin(lam);
  double clam = abs(lon) == 90 ? 0 : cos(lam);

  z = ((1 - WGS84_e2) * n + h) * sphi;
  x = (n + h) * cphi;
  y = x * slam;
  x *= clam;
  std::cout << "globalx: " << x << " globaly: " << y << " globalz: " << z << std::endl;
  return Eigen::Vector3d(x, y, z);
}
Eigen::Vector3d Cord_Transfer::Global2Lonlat(double &x, double &y, double &z) {
  double L = atan2(y, x);

  double B0 = atan2(z * (1 + WGS84_e2), sqrt(x * x + y * y));

  double Th = 1E-10;  // condition to finish the iteration
  double dDiff = 1;
  double tmpTan = z / sqrt(x * x + y * y);
  while (dDiff > Th) {
    double tmp = WGS84_a * WGS84_e2 * sin(B0) / (z * sqrt(1 - WGS84_e2 * sin(B0) * sin(B0)));
    double B = atan(tmpTan * (1 + tmp));
    dDiff = fabs(B - B0);
    B0 = B;
  }
  double W = sqrt(1 - WGS84_e2 * sin(B0) * sin(B0));
  double N = WGS84_a / W;

  double dis = sqrt(x * x + y * y) / cos(B0);
  z = dis - N;
  x = L * 180. / M_PI;
  y = B0 * 180. / M_PI;
  return Eigen::Vector3d(x, y, z);
}

void Cord_Transfer::Global2ENU(double &x, double &y, double &z,double lon_ref, double lat_ref) {
    double lat_ref_rad = lat_ref / roudu; // 纬度
    double lon_ref_rad = lon_ref / roudu; // 经度

    Eigen::Matrix3d A;
    A << -sin(lon_ref_rad), cos(lon_ref_rad), 0,
         -sin(lat_ref_rad)*cos(lon_ref_rad), -sin(lat_ref_rad)*sin(lon_ref_rad), cos(lat_ref_rad),
         cos(lat_ref_rad)*cos(lon_ref_rad), cos(lat_ref_rad)*sin(lon_ref_rad), sin(lat_ref_rad);
    Eigen::Vector3d xyz(x, y, z);
    Eigen::Vector3d enu = A * xyz;
    x = enu(0);
    y = enu(1);
    z = enu(2);
    std::cout <<"enu_xyz: " << x << " " << y << " " << z << std::endl; 
}

void Cord_Transfer::ENU2Global(double &x, double &y, double &z,double lon_ref, double lat_ref) {
    double lat_ref_rad = lat_ref / roudu; // 纬度
    double lon_ref_rad = lon_ref / roudu; // 经度

    Eigen::Matrix3d A;
    A << -sin(lon_ref_rad), cos(lon_ref_rad), 0,
         -sin(lat_ref_rad)*cos(lon_ref_rad), -sin(lat_ref_rad)*sin(lon_ref_rad), cos(lat_ref_rad),
         cos(lat_ref_rad)*cos(lon_ref_rad), cos(lat_ref_rad)*sin(lon_ref_rad), sin(lat_ref_rad);
    Eigen::Matrix3d A_inv = A.inverse();
    
    Eigen::Vector3d xyz(x, y, z);
    Eigen::Vector3d enu = A_inv * xyz;
    x = enu(0);
    y = enu(1);
    z = enu(2);
    std::cout <<"enu_xyz: " << x << " " << y << " " << z << std::endl;
};