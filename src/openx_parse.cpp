#include "openx_parse.h"



namespace T_Sim{
    bool Parse::LoadFile(const char* file_name){
        // tinyxml2::XMLDocument doc;
        if (doc_.LoadFile(file_name)!=tinyxml2::XML_SUCCESS) {
            std::cout << "Error loading file" << std::endl;
            return false;
        }
        return true;
    }
    bool Parse::parse_xosc(sim_msg::Location& loc, sim_msg::Traffic& traffic){
        tinyxml2::XMLElement* root = doc_.RootElement();    
        tinyxml2::XMLElement* Private = root->FirstChildElement("Storyboard")->FirstChildElement("Init")->FirstChildElement("Actions")->FirstChildElement("Private");
        if (Private==nullptr){ 
            std::cout << "Error loading Private" << std::endl;
            return false;
        }
        while (Private!=nullptr){
            std::cout << "car name: " << Private->Attribute("entityRef") << std::endl;
            tinyxml2::XMLElement* PrivateAction = Private->FirstChildElement("PrivateAction");
            tinyxml2::XMLElement* speed = PrivateAction->FirstChildElement("LongitudinalAction")->FirstChildElement("SpeedAction")
            ->FirstChildElement("SpeedActionTarget")->FirstChildElement("AbsoluteTargetSpeed");
            PrivateAction = PrivateAction->NextSiblingElement();
            tinyxml2::XMLElement* positon = PrivateAction->FirstChildElement("TeleportAction")->FirstChildElement("Position")->FirstChildElement("WorldPosition");
            std::string car_name(Private->Attribute("entityRef"));
            // Parse ego
            if (car_name.find("Ego") != std::string::npos){
                double ego_speed = std::stod(speed->Attribute("value"));
                double ego_x = std::stod(positon->Attribute("x"));
                double ego_y = std::stod(positon->Attribute("y"));
                double ego_z = std::stod(positon->Attribute("z"));
                loc.mutable_pos()->set_x(ego_x);
                loc.mutable_pos()->set_y(ego_y);
                loc.mutable_pos()->set_z(ego_z);
                loc.mutable_vel()->set_x(ego_speed);
            }
            // Parse traffic car
            else{
                double car_speed = std::stod(speed->Attribute("value"));
                double car_x = std::stod(positon->Attribute("x"));
                double car_y = std::stod(positon->Attribute("y"));
                double car_z = std::stod(positon->Attribute("z"));
                sim_msg::Car* car = traffic.add_cars();
                car->set_x(car_x);
                car->set_y(car_y);
                car->set_v(car_speed);
                // traffic.mutable_cars()->set_x(car_x);
                std::cout <<"car pos" << traffic.cars(0).x() <<" , "<< traffic.cars(0).y() << std::endl;
            }
            Private = Private->NextSiblingElement();
            std::cout <<"ego pos" << loc.mutable_pos()->x() <<" , "<<  loc.mutable_pos()->y() << std::endl;
            std::cout <<"ego vel" << loc.mutable_vel()->x() << std::endl;

            // std::cout <<"car pos" << traffic.cars(0).x() <<" , "<<  traffic.cars(0).y() << std::endl;
        }
        return true;
    }

};