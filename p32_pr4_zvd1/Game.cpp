#include "Game.h"
#include <iostream>
#include <windows.h>

Game::Game(int size, int lineLength, int playerCount) {
    this->size = size;
    this->area = new int*[size];

    for(int i = 0; i < size; i++){
        this->area[i] = new int[size];
    }

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            this->area[i][j] = -1;
        }
    }

    this->playersCount = playerCount;
    this->lineLength = lineLength;
    this->currentPlayer = 1;
}

Game::~Game() {
    for(int i = 0; i < size; i++){
        delete[] this->area[i];
    }

    delete[] this->area;
}

void Game::start() {
    this->writeArea();

    while(true) {
        this->turn();

        this->writeArea();

        if(checkWinOrNightly()){
            std::cout << "Player " << this->currentPlayer << " win!!!";
            break;
        }

        if(this->currentPlayer == this->playersCount)
            this->currentPlayer = 1;
        else
            this->currentPlayer++;
    }
}

void Game::turn() {
    std::cout << "\n Player progress number " << this->currentPlayer << std::endl;

    // TODO: забрати цей костиль з X, Y,які насправді перепутані
    char x;
    int y;

    std::cout << "Write x: ";
    std::cin >> y;

    std::cout << "Write y: ";
    std::cin >> x;

    this->updateAreaCell(x, y);
}

void Game::writeArea() {
    system("cls");

    COORD coord;
    coord.X = 0;
    coord.Y = 0;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

    std::cout << "x\\y";
    for(int i = 0; i < size; i++){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 95);
        std::cout << "|" << (char)('a' + i) << "|";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    }
    std::cout << std::endl;

    for(int i = 0; i < size; i++){

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 95);
        std::cout << "|" << i << "|";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

        for(int j = 0; j < size; j++){
            if(this->area[i][j] != -1) {
                std::cout << "|";

                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), static_cast<WORD>(9 + this->area[i][j]));
                std::cout << (char)219;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

                std::cout << "|";
            }
            else if(i == size - 1)
                std::cout << "| |";
            else
                std::cout << "|_|";
        }
        std::cout << std::endl;
    }
}

bool Game::updateAreaCell(char x, int y) {
    if(this->area[y][x - 97] != -1)
        return false;

    this->area[y][x - 97] = this->currentPlayer;
    return true;
}

bool Game::checkWinOrNightly() {
    int direction[8][2] = {
            {-1, -1},
            {-1, 1},
            {1, -1},
            {1, 1},
            {1, 0},
            {-1, 0},
            {0, 1},
            {0, 1},
    };

    for(int x = 0; x < size; x++){
        for(int y = 0; y < size; y++){
            if(this->area[x][y] == this->currentPlayer){
                for (auto &direct : direction) {
                    if(this->checkLine(direct, x, y))
                        return true;
                }
            }
        }
    }

    return false;
}

bool Game::checkLine(int direction[2], int x, int y) {
    for(int i = 1; i < this->lineLength; i++){
        int xForVerification = x + (i * direction[0]);
        int yForVerification = y + (i * direction[1]);

        if(xForVerification >= this->size || yForVerification >= this->size  || xForVerification < 0 || yForVerification < 0)
            return false;

        if(this->area[xForVerification][ yForVerification] != this->currentPlayer)
            return false;
    }

    return true;
}





