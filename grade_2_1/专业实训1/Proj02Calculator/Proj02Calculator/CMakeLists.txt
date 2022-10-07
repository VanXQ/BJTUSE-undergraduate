cmake_minimum_required(VERSION 3.17)
project(Proj02Caculator)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

if (CMAKE_VERSION VERSION_LESS "3.7.0")
    set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif ()

find_package(Qt6 COMPONENTS Widgets REQUIRED)

add_executable(Proj02Caculator main.cpp window.cpp window.h window.ui ui_window.h)
target_link_libraries(Proj02Caculator Qt6::Widgets)