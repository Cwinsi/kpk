cmake_minimum_required(VERSION 3.12)
project(p32_pubSub)

set(CMAKE_CXX_STANDARD 14)

add_executable(p32_pubSub main.cpp PubSub.cpp PubSub.h Telegram.cpp Telegram.h)