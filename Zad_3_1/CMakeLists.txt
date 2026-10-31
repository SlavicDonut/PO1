cmake_minimum_required(VERSION 4.2)
project(Zad_3_1)

set(CMAKE_CXX_STANDARD 20)

add_executable(Zad_3_1 main.cpp
        Worker.cpp
        Worker.h
        Manager.cpp
        Manager.h
        Date.cpp
        Date.h
)
