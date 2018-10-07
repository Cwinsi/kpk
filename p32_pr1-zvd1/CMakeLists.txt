cmake_minimum_required(VERSION 3.12)
project(Cart)

set(CMAKE_CXX_STANDARD 14)

add_executable(Cart main.cpp Cart.cpp Cart.h Product.cpp Product.h)