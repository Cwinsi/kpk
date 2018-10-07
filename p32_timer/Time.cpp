#include "Time.h"
#include <iostream>

Time::Time() {
    this->godinochki = 0;
    this->hvilinochki = 0;
    this->secundochki = 0;
}

Time::Time(int godinochki, int hvilinochki, int secundochki) {
    this->godinochki = godinochki;
    this->hvilinochki = hvilinochki;
    this->secundochki = secundochki;
}

void Time::out() {
    std::cout << this->godinochki << ":" << this->hvilinochki << ":" << this->secundochki << std::endl;
}

Time Time::add(Time time1, Time time2) {
    int secundochki = time1.getSecundochki() + time2.getSecundochki();
    int hvilinochki = time1.getHvilinochki() + time2.getHvilinochki();
    int godinochki = time1.getGodinochki() + time2.getGodinochki();

    if(secundochki >= 60) {
        secundochki = secundochki % 60;
        hvilinochki++;
    }

    if(hvilinochki >= 60){
        hvilinochki = hvilinochki % 60;
        godinochki++;
    }

    return {
        godinochki,
        hvilinochki,
        secundochki
    };
}

int Time::getGodinochki() {
    return this->godinochki;
}

int Time::getHvilinochki() {
    return this->hvilinochki;
}

int Time::getSecundochki() {
    return this->secundochki;
}
