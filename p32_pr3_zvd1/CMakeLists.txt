cmake_minimum_required(VERSION 3.12)
project(p32_pr2_zav1)

set(CMAKE_CXX_STANDARD 14)

add_executable(p32_pr2_zav1 main.cpp House.cpp House.h Consumer.cpp Consumer.h)