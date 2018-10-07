#include <iostream>
#include "Time.h"

int main() {
    Time time1(10, 59, 30);
    Time time2(10, 0, 30);

    time1.out();
    time2.out();

    Time time3 = Time::add(time1, time2);
    time3.out();

    return 0;
}