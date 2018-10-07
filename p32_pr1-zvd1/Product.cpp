#include <utility>

//
// Created by grigo on 23.09.2018.
//

#include "Product.h"

Product::Product(float price, std::string name) {
    this->price = price;
    this->name = std::move(name);
}

float Product::getPrice() {
    return this->price;
}

std::string Product::getName() {
    return this->name;
}
