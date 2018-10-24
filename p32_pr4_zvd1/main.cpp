#include <conio.h>
#include <cstdlib>
#include <iostream>
#include <string>
#include "Game.h"

int main() {
    std::cout << "Enter the size of the game field:" << std::endl;
    int areaSize;
    std::cin >> areaSize;

    std::cout << "Enter the count of players (max 4):" << std::endl;
    int playersCount;
    std::cin >> playersCount;

    std::cout << "enter the length of the line you want to collect:" << std::endl;
    int lineLength;
    std::cin >> lineLength;

    Game game(areaSize, lineLength, playersCount);


    std::cout << "Press any key to start the game!" << std::endl;
    _getch();
    game.start();
    _getch();

    return 0;
}