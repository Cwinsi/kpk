#include <iostream>
#include <string>
#include "User.h"

int main(){
    User userOne(std::string("Andrei"), std::string("Grigortsev"));

    userOne = makeAStudent(userOne);

    std::cout << "user:" << userOne.getName() << " " << userOne.getSurname() << ", " << userOne.getType();
}