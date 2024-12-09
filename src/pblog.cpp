#pragma once
#include <cstdint>
#include <string.h>
#include "pblog.h"


namespace pblog {
    bool plogger::read_pblog(const pblog_event& pb, std::string file_name){
    };
         
    
    bool  plogger::write_pblog(const pblog_event& pb, std::string file_name){
        std::ofstream file(file_name, std::ios::out | std::ios::binary | std::ios::app);
        if (!file.is_open()){
            std::cout << "Error opening file" << std::endl;
            return false;
        }
        char t_size[4], p_size[4],time_stamp[8];
        memcpy(t_size, &pb.topicSize, 4);
        memcpy(p_size, &pb.payloadSize, 4);
        memcpy(time_stamp, &pb.timestamp, 8);

        file.write(t_size, 4);
        file.write(p_size, 4);
        file.write(time_stamp, 8);
        file.write(pb.topic.c_str(), pb.topicSize);
        file.write(pb.payload.c_str(), pb.payloadSize);
        file.close();

        return true;
    }
    void plogger::msg2pblog(pblog_event &pb, const std::string& topic, const std::string& payload, const int64_t &timestamp){
        pb = init_plog_event();
        pb.topic = topic;
        pb.payload = payload;
        pb.timestamp = timestamp;
        pb.topicSize = (u_int32_t)topic.size();
        pb.payloadSize = (u_int32_t)payload.size();
        std::cout << "msg2pblog Topic: " << pb.topic << std::endl;
        std::cout << "msg2pblog Payload: " << pb.payload << std::endl;
        std::cout << "msg2pblog Timestamp: " << pb.timestamp << std::endl;
        std::cout << "msg2pblog Topic Size: " << pb.topicSize << std::endl;
        std::cout << "msg2pblog Payload Size: " << pb.payloadSize << std::endl;
    }
    pblog_event plogger::init_plog_event(){
        pblog_event pb;
        pb.topic = "";
        pb.payload = "";
        pb.timestamp = 0;
        pb.topicSize = 0;
        pb.payloadSize = 0;
        return pb;
    }


};