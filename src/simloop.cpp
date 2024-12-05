#include "simloop.h"



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
        return true;
    }
    bool SimLoop::Step(){

    }
};