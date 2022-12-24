cmake_minimum_required(VERSION 3.24)
project(CalculateDigits)

set(CMAKE_CXX_STANDARD 17)

add_executable(CalculateDigits main.cpp generate_examples.cpp generate_examples.h pre_process.cpp pre_process.h divide_algorithm.cpp divide_algorithm.h Number.cpp Number.h)