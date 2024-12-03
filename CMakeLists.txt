cmake_minimum_required(VERSION 3.0.0)
project(Traffic_flow)
set(CMAKE_CXX_STANDARD 11)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

include_directories(${CMAKE_SOURCE_DIR}/include)


add_executable(${PROJECT_NAME} main.cpp 
                                   src/actor_car.cpp 
                                   src/ego_car.cpp 
                                   src/traffic_ele.cpp)