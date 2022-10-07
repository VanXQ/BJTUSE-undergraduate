cmake_minimum_required(VERSION 3.17)
project(Parking_lot_management_system_master)

set(CMAKE_CXX_STANDARD 14)

include_directories(ДњТы)
include_directories(ДњТы/Debug)

add_executable(Parking_lot_management_system_master main.cpp Node.h)

add_executable(main main.cpp)
add_executable(Node Node.h)
add_executable(func node.h)
add_executable(DOC DOC.md)
add_executable(node node.h)