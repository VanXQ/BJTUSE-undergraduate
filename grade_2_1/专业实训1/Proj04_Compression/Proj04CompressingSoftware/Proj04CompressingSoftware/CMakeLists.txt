cmake_minimum_required(VERSION 3.20)
project(Proj04CompressingSoftware)

set(CMAKE_CXX_STANDARD 14)

include_directories(header)

add_executable(Proj04CompressingSoftware
        header/Compress.h
        header/Extract.h
        header/HuffmanTree.h
        main.cpp)