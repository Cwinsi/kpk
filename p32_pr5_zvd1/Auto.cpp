#include "Auto.h"

Auto::Auto(std::string autoName, int autoPrice) {
    name = autoName;
    price = autoPrice;
}

std::string Auto::getName() {
    return name;
}

int Auto::getPrice() {
    return price;
}

void rename(Auto &a, std::string name) {
    a.name = std::move(name);
}