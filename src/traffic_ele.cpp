#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "traffic_ele.h"
#include "location.pb.h"


namespace T_Sim{
    Traffic_Ele::Traffic_Ele(){
        std::cout << "Traffic created! " << std::endl;
    }
    void Traffic_Ele::Step(){
        actor_car_->run();
        ego_car_->run();
    }
    void Traffic_Ele::Add_Actor(std::shared_ptr<Actor_Car> actor_car){
        actor_car_ = actor_car;
    }
    void Traffic_Ele::Add_Ego(std::shared_ptr<Ego_Car> ego_car){
        ego_car_ = ego_car;
    }

};