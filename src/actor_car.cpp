#include <iostream>
#include <string>
#include <vector>
#include "actor_car.h"

namespace T_Sim{
    Actor_Car::Actor_Car(std::string name):name_(name),x(1){
        std::cout << "actor_car "<< name_ << "created!" << std::endl;
    }
    void Actor_Car::run(){
        this->x +=1;
        std::cout << "actor_car x :" << this->x <<std::endl;
    }

};