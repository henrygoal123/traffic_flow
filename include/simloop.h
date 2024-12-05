#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "openx_parse.h"

namespace T_Sim{
    class SimLoop{
        public:
         bool Init(const char* file_name);
         bool Step();
        private:
         Parse parse_;
    };
};