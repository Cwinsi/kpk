//
// Created by grigo on 23.09.2018.
//

#include "Timer.h"
#include <iostream>

void Timer::start() {
    time(&this->timer);
    std::cout << "[dev] Timer is started" << std::endl;
}

void Timer::end() {
    time_t endTime;
    time(&endTime);

    std::cout << "[dev] Work time: " << endTime - this->timer << "s" << std::endl;
}