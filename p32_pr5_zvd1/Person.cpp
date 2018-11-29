#include <utility>
#include <string>
#include <iostream>

#include "Person.h"

Person::Person(std::string n) {
    name = std::move(n);
}

void Person::drive(Auto &a)
{
    std::cout << name << " drives " << a.name << std::endl;
}
void Person::setPrice(Auto &a, int price)
{
    if (price > 0)
        a.price = price;
}