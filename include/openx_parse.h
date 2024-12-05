#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "traffic.pb.h"
#include "trajectory.pb.h"
#include "location.pb.h"
#include "tinyxml2.h"


namespace T_Sim{
    class Parse{
        public:
         bool LoadFile(const char* file_name);
         bool parse_xodr();
         bool parse_xosc(sim_msg::Location& loc, sim_msg::Traffic& traffic);
        private:
            tinyxml2::XMLDocument doc_;
    };
};