cmake_minimum_required(VERSION 3.12)
project(p32_timer)

set(CMAKE_CXX_STANDARD 14)

add_executable(p32_timer main.cpp Time.cpp Time.h)