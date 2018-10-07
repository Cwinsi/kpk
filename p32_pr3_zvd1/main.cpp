#include <iostream>
#include <string>

#include "Consumer.h"
#include "House.h"

int main() {
    auto *house1 = new House(1);
    house1->addConsumer(new Consumer(std::string("Holodilnik"), 150.0f, 240.0f));
    house1->addConsumer(new Consumer(std::string("Lampochka nakalivania"), 200.0f, 230.0f));

    auto *house2 = new House(2);
    house2->addConsumer(new Consumer(std::string("Holodilnik"), 160.0f, 255.0f));
    house2->addConsumer(new Consumer(std::string("Lampochka LED"), 12.0f, 300.0f));

    auto *house3 = new House(3);
    house3->addConsumer(new Consumer(std::string("Boiler"), 210.0f, 225.0f));
    house3->addConsumer(new Consumer(std::string("Mikrovolnovka"), 210.0f, 240.0f));

    House::voltage = 230.0f;

    house1->drawComfort();
    house2->drawComfort();
    house3->drawComfort();

    return 0;
}