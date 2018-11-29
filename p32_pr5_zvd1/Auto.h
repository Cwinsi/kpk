#include <string>

#ifndef P32_PR5_ZVD1_AUTO_H
#define P32_PR5_ZVD1_AUTO_H

class Auto {
    friend class Person;
private:
    std::string name;
    int price;
    friend void rename(Auto &a, std::string name);
public:
    Auto(std::string autoName, int autoPrice);
    std::string getName();
    int getPrice();
};

#endif //P32_PR5_ZVD1_AUTO_H
