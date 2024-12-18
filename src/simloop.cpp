#include "simloop.h"
#include <ctime>
#include "cord_transfer.h"



namespace T_Sim{
    bool SimLoop::Init(const char* file_name){
        if (!parse_.LoadFile(file_name)){
            return false;
        };
        sim_msg::Traffic tra;
        sim_msg::Location loc;
        if (!parse_.parse_xosc(loc,tra)){
            return false;
        };
        time_t now = time(0);
        std::string tra_msg;
        tra.SerializeToString(&tra_msg);
        pblog::plogger p_log;
        pblog::pblog_event pb_event;
        p_log.msg2pblog(pb_event,"traffic",tra_msg,now);
        p_log.write_pblog(pb_event,"./output.pblog");
//Transfer2enu;
        double lon = loc.mutable_pos()->x();
        double lat = loc.mutable_pos()->y();
        double alt = loc.mutable_pos()->z();
        Eigen::Vector3d xyz = Cord_Transfer::Lonlat2Global(lon,lat,alt);
        


        time_t now2 = time(0);
        std::string loc_msg;
        loc.SerializeToString(&loc_msg);
        p_log.msg2pblog(pb_event,"location",loc_msg,now2);
        p_log.write_pblog(pb_event,"./output.pblog");
        


        return true;
    }
    bool SimLoop::Step(){

    }
};