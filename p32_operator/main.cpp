#include <iostream>

class Vector2{
private:
    int x;
    int y;
public:
    Vector2(int x, int y){
        this->x = x;
        this->y = y;
    }

    int getX(){
        return this->x;
    }

    int getY(){
        return this->y;
    }

    void add(Vector2 &vector2) {
        this->x = this->x + vector2.getX();
        this->y = this->x + vector2.getY();
    }

    void sub(Vector2 &vector2) {
        this->x = vector2.getX() - this->x;
        this->y = vector2.getY() - this->y;
    }

    Vector2 operator+(){

    }

    Vector2 operator-(Vector2 &vector1, Vector2 &vector2){

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}