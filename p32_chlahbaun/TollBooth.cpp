#include "TollBooth.h"
#include <iostream>

TollBooth::TollBooth() {
    this->cars = 0;
    this->pay = 0.0;
}

void TollBooth::payingCar() {
    cars++;
    pay += 0.5;
}

void TollBooth::noPayCar() {
    cars++;
}

void TollBooth::display() {
    std::cout << "cars: " << cars << ", pay: " << pay << "grn." << std::endl;
}
