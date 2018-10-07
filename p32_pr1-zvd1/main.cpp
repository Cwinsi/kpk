#include <iostream>
#include <string>
#include <clocale>

#include "Cart.h"
#include "Product.h"

int main() {
    Cart *cart = new Cart(std::string("Andrei Grigortsev"));

    cart->addProduct(new Product(7, std::string("Sockoh Sadochok")));
    cart->addProduct(new Product(10, std::string("Bulochka c sosisochkou")));
    cart->addProduct(new Product(4.5, std::string("Vodichka")));

    cart->addProduct(new Product(12, std::string("Vafelki")));

    cart->drawCheck();

    return 0;
}