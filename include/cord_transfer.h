#include <cmath>
#include <Eigen/Dense>

class Cord_Transfer{ 
    public:
        Cord_Transfer();
        ~Cord_Transfer();
        static Eigen::Vector3d Lonlat2Global(double &x, double &y, double &z);
        static Eigen::Vector3d Global2Lonlat(double &x, double &y, double &z);
        static void Global2ENU(double &x, double &y, double &z,double lon_ref, double lat_ref);
        static void ENU2Global(double &x, double &y, double &z,double lon_ref, double lat_ref) ;


};