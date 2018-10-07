#include <iostream>
#include <conio.h>
#include "TollBooth.h"

int main() {
    TollBooth tollBooth;

    while (true) {
        if(_kbhit()) {
            int button = _getch();

            if(button == 49){
                tollBooth.payingCar();
                std::cout << "Machina zaplatila" << std::endl;
            }

            if(button == 48){
                tollBooth.noPayCar();
                std::cout << "Machina ne zaplatila" << std::endl;
            }

            if(button == 108){
                tollBooth.display();
                break;
            }
        }
    }
    _getch();

    return 0;
}