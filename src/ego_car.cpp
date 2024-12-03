#include <iostream>
#include <string>
#include <vector>
#include "ego_car.h"

namespace T_Sim{
    Ego_Car::Ego_Car(std::string name):name_(name),x(0){
        std::cout << "ego_car "<< name_ << "created!" << std::endl;
    }
    void Ego_Car::run(){
        this->x +=1;
        std::cout << "ego_car x :" << this->x <<std::endl;
    }

};