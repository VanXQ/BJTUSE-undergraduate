cmake_minimum_required(VERSION 3.20)
project(Proj03ParkingLotManagement_1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Proj03ParkingLotManagement_1
        main.cpp
        node.h)

add_executable(main main.cpp)
add_executable(node node.h)