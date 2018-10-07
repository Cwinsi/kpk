#include <iostream>
#include "Timer.h"

int main() {
    Timer *timer = new Timer();
    timer->start();

    // цикл для створення навантаження
    for(int i = 0; i < 50000; i++){
        for(int j = 0; j < i*2; j++){
            int a = 124525;
            a *= 244;
        }
    }

    timer->end();
    return 0;
}