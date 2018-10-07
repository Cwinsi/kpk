//
// Created by grigortsevandrei on 23.09.2018.
//

#ifndef CART_CART_H
#define CART_CART_H

#include "string"
#include "Product.h"
#include "vector"

class Cart {
private:
    std::string fullname;
    std::vector<Product*> products;
public:
    explicit Cart(std::string fullname);
    ~Cart();
    void addProduct(Product *product);
    float getAllPrice();
    void drawCheck();
};


#endif //CART_CART_H
