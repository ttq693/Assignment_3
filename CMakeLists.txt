cmake_minimum_required(VERSION 3.26)
project(Assignment)

set(CMAKE_CXX_STANDARD 17)

add_executable(Assignment main.cpp
        Account.cpp
        Date.cpp
        Date.h
        Account.h)
