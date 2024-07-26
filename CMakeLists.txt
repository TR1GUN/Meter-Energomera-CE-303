cmake_minimum_required(VERSION 3.24)
project(Meter)

set(CMAKE_CXX_STANDARD 23)

add_executable(Meter main.cpp MeterData.h GenerateData.h src/Typing.h print.h)
