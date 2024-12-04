#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "tinyxml2.h"


namespace T_Sim{
    class Parse{
        public:
         bool LoadFile(const char* file_name);
         bool parse_xodr();
         bool parse_xosc();
        private:
            tinyxml2::XMLDocument* doc_;
    };
};