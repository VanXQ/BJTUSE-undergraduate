cmake_minimum_required(VERSION 3.17)
project(Calc_algorithm)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
if (CMAKE_VERSION VERSION_LESS "3.7.0")
    set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif ()

find_package(Qt6 COMPONENTS Widgets REQUIRED)

add_executable(Calc_algorithm
        StyleSheet/style.css
        main.cpp
        widget.cpp
        widget.h
        widget.ui)
target_link_libraries(Calc_algorithm Qt6::Widgets)
