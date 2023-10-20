cmake_minimum_required(VERSION 3.26)
project(Coursework_Beal)

set(CMAKE_CXX_STANDARD 17)

find_package(Boost 1.74.0 REQUIRED COMPONENTS filesystem)
include_directories(${Boost_INCLUDE_DIRS})

add_executable(
        Coursework_Beal
        main.cpp
        Question1-3.cpp
        Question7.cpp
        Question8.cpp

)
