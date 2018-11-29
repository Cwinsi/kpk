#include <iostream>

int add(int a, int b){
    return a + b;
}

void calc(int calc(int,int)){
    std::cout << calc(1, 1);
}

int main() {
    auto *adrBoo = add;
    calc(adrBoo);

    return 0;
}