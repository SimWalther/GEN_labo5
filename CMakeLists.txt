cmake_minimum_required(VERSION 3.13)  # CMake version check
project(GEN_labo5)                    # Create project 
set(CMAKE_CXX_STANDARD 14)            # Enable c++14 standard

# Add main.cpp file of project root directory as source file
FILE(GLOB SRCFILES *.cpp)

# Add executable target with source files listed in SRCFILES
add_executable(genlabo5 ${SRCFILES})
