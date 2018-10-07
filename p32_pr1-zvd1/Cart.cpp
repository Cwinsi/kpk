//
// Created by grigo on 23.09.2018.
//

#include "Cart.h"
#include <iostream>

Cart::Cart(std::string fullname) {
    this->fullname = std::move(fullname);
}

void Cart::addProduct(Product *product) {
    this->products.push_back(product);
}

float Cart::getAllPrice() {
    float allPrice = 0;

    for (auto &product : this->products)
        allPrice += product->getPrice();

    return allPrice;
}

void Cart::drawCheck() {
    std::cout << "Pokupech: " << this->fullname << std::endl;

    for (auto &product : this->products)
         std::cout << "  " << product->getName() << " - " << product->getPrice() << "grn." << std::endl;


    std::cout << "Arividerchi s dekovat za pokupky" << std::endl;
}

Cart::~Cart() {
    std::cout << "Korzinky postavili na kupku" << std::endl;
}

