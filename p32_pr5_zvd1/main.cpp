#include <iostream>
#include <string>

#include "Auto.h"
#include "Person.h"

int main()
{
    Auto tesla("Kopeika", 5000);

    rename(tesla, "Tesla");

    Person petro("Petro");
    petro.drive(tesla);
    petro.setPrice(tesla, 8000);

    std::cout << tesla.getName() << " : " << tesla.getPrice() << std::endl;

    return 0;
}