cmake_minimum_required(VERSION 3.12)
project(p32_pr4_zvd1)

set(CMAKE_CXX_STANDARD 14)

add_executable(p32_pr4_zvd1 main.cpp Game.cpp Game.h)

include_directories("C:\\libs\\glfw-3.2.1.bin.WIN64\\include\\GLFW\\glfw3.h")