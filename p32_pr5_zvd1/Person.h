#include "string"
#include "Auto.h"

#ifndef P32_PR5_ZVD1_PERSONE_H
#define P32_PR5_ZVD1_PERSONE_H

class Person {
private:
    std::string name;
public:
    Person(std::string n);
    void drive(Auto &a);
    void setPrice(Auto &a, int price);
};

#endif //P32_PR5_ZVD1_PERSONE_H
