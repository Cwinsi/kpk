#include <iostream>

int main() {
    int assessments[10];
    double avg = 0;
    int sum = 0;

    for(auto &assessment: assessments)
        std::cin >> assessment;

    for(auto &assessment: assessments)
        sum += assessment;

    avg = (double) sum / 10;

    std::cout << "avg: " << avg << std::endl;

    return 0;
}