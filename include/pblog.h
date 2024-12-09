#pragma once
#include <cstdint>
#include <ctime>
#include <fstream>
#include <iostream>
#include <memory>

namespace pblog {
    struct pblog_event {
        uint32_t topicSize = 0;
        uint32_t payloadSize = 0;
        uint32_t timestamp = 0;
        std::string topic;
        std::string payload;
    };
    class plogger {
        public:
         bool read_pblog(const pblog_event& pb, std::string file_name);
         bool write_pblog(const pblog_event& pb, std::string file_name);
         void msg2pblog(pblog_event &pb, const std::string& topic, const std::string& payload, const int64_t &timestamp);
         pblog_event init_plog_event();      
    };
};