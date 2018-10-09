#include <iostream>

int main() {
    const int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int day;
    int month;
    int allDays = 0;

    std::cout << "Input day: ";
    std::cin >> day;
    std::cout << "\n";

    std::cout << "Input month: ";
    std::cin >> month;
    std::cout << "\n";

    allDays = day;

    for(int i = 0; i < month - 1; i++)
        allDays += months[i];

    std::cout << allDays;

    return 0;
}