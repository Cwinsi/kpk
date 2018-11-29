#include <iostream>

class Sumator{
private:
    int sum;
    int num;
public:
    void calc(int num){
        int sum = 0;

        for(int i = 1; i <= num; i++)
            sum += i;

        this->sum = sum;
    }

    void showSum(){
        std::cout << "sum = " << this->sum << std::endl;
    }
};

Sumator make_sum(){
    int num;
    std::cin >> num;

    Sumator sumator;
    sumator.calc(num);
    return sumator;
}

int main() {
    Sumator sumator = make_sum();
    sumator.showSum();

    return 0;
}