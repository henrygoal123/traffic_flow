#include <iostream>
#include <string>
#include <vector>

namespace T_Sim{
    class Ego_Car{
        public:
         Ego_Car(std::string name);
         void run();
        private:
        std::string name_;
         double x,y,theta;
         double v,a;
         double t;
    };
};