//
// Created by grigo on 23.09.2018.
//

#ifndef CART_PRODUCT_H
#define CART_PRODUCT_H

#include "string"

class Product {
private:
    float price;
    std::string name;
public:
    Product(float price, std::string name);
    float getPrice();
    std::string getName();
};


#endif //CART_PRODUCT_H
