#include <utility>
#include "Consumer.h"
#include <iostream>

Consumer::Consumer(std::string name, float minV, float maxV) {
    this->name = std::move(name);
    this->solidity = 100;
    this->maxV = maxV;
    this->minV = minV;
}

void Consumer::work(float voltage) {
    int damage = 0;

    if(this->maxV < voltage)
        damage = 100;

    if(this->minV > voltage)
        damage = static_cast<int>((this->minV - voltage) * 5);

    if(this->solidity < damage)
        this->solidity = 0;
    else
        this->solidity = this->solidity - damage;
}

int Consumer::getSolidity() {
    return this->solidity;
}

std::string Consumer::getName() {
    return this->name;
}
