#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "ego_car.h"
#include "actor_car.h"
#include "traffic_ele.h"

bool test(){
    T_Sim::Traffic_Ele tra_ele;
    tra_ele.Add_Actor(std::make_shared<T_Sim::Actor_Car>("car1"));
    tra_ele.Add_Ego(std::make_shared<T_Sim::Ego_Car>("ego1"));
    for (int i = 0; i < 3; i++){
        tra_ele.Step();   
    }
}
int main(){
    if (!test()){
        return -1;
    }
    return 0;
}