//
// Created by grigo on 23.09.2018.
//

#ifndef P32_PR1_ZVD2_TIMER_H
#define P32_PR1_ZVD2_TIMER_H

#include <ctime>

class Timer {
private:
    time_t timer;
public:
    void start();
    void end();
};


#endif //P32_PR1_ZVD2_TIMER_H
