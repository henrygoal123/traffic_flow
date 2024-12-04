cmake_minimum_required(VERSION 3.0.0)
project(Traffic_flow)
set(CMAKE_CXX_STANDARD 11)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

find_package(Protobuf REQUIRED)


include_directories(${CMAKE_SOURCE_DIR}/include)
include_directories(${CMAKE_SOURCE_DIR}/msg)




add_executable(${PROJECT_NAME} main.cpp 
                                   src/actor_car.cpp 
                                   src/ego_car.cpp 
                                   src/traffic_ele.cpp
                                   src/openx_parse.cpp
                                   msg/location.pb.cc
                                   msg/traffic.pb.cc
                                   msg/common.pb.cc
                                   msg/trajectory.pb.cc)

target_link_libraries(${PROJECT_NAME} ${Protobuf_LIBRARIES})