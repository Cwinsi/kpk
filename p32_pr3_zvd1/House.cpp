#include <iostream>
#include "House.h"

House::House(int number) {
    this->number = number;
}

void House::addConsumer(Consumer *consumer) {
    this->consumers.push_back(consumer);
}

const void House::drawComfort() {
    int allSolidity = 0;
    int avgSolidity;
    std::vector<Consumer*> brokenDevices;

    for(auto &consumer : this->consumers){
        consumer->work(House::voltage);

        allSolidity += consumer->getSolidity();

        if(consumer->getSolidity() == 0)
            brokenDevices.push_back(consumer);
    }

    avgSolidity = allSolidity / this->consumers.size();

    std::cout << "V budinku nomer " << this->number << " electro postachanie ";
    if(avgSolidity == 100)
        std::cout << "idealne" << std::endl;
    else if(avgSolidity > 70)
        std::cout << "bajae kraschogo" << std::endl;
    else if(avgSolidity > 50)
        std::cout << "pogane" << std::endl;
    else
        std::cout << "duje pogane" << std::endl;

    if(!brokenDevices.empty()) {
        std::cout << "Polamani priladi: " << std::endl;

        for (auto &brokenConsumer : brokenDevices)
            std::cout << "  " << brokenConsumer->getName() << std::endl;
    }
}

float House::voltage = 0.0f;

void House::setVoltage(float voltage) {
    House::voltage = voltage;
}


