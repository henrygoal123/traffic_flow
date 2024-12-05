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
    bool Parse::parse_xosc(){
        tinyxml2::XMLElement* root = doc_.RootElement();    
        tinyxml2::XMLElement* Private = root->FirstChildElement("Storyboard")->FirstChildElement("Init")->FirstChildElement("Actions")->FirstChildElement("Private");
        if (Private==nullptr){ 
            std::cout << "Error loading Private" << std::endl;
            return false;
        }
        std::cout << "car name: " << Private->Attribute("entityRef") << std::endl;
        tinyxml2::XMLElement* speed = Private->FirstChildElement("PrivateAction")->FirstChildElement("LongitudinalAction")
        ->FirstChildElement("SpeedAction")->FirstChildElement("SpeedActionTarget")->FirstChildElement("AbsoluteTargetSpeed");
        if (speed==nullptr){ 
            std::cout << "Error loading speed" << std::endl;
            return false;
        }
        std::string speed_val = speed->Attribute("value");
        std::cout << "speed: " << speed_val << std::endl;
    }

};