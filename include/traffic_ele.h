#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "ego_car.h"
#include "actor_car.h"

namespace T_Sim{
    class Traffic_Ele{
        public:
         Traffic_Ele();
         void Step();
         void Add_Actor(std::shared_ptr<Actor_Car> actor_car);
         void Add_Ego(std::shared_ptr<Ego_Car> ego_car);
        private:
         std::shared_ptr<Actor_Car> actor_car_;
         std::shared_ptr<Ego_Car> ego_car_;
    };
};