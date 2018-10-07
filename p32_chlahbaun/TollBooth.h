//
// Created by grigo on 02.10.2018.
//

#ifndef CHLAVBAUN_TOLLBOOTH_H
#define CHLAVBAUN_TOLLBOOTH_H


class TollBooth {
private:
    unsigned int cars;
    double pay;
public:
    TollBooth();
    void payingCar();
    void noPayCar();
    void display();
};


#endif //CHLAVBAUN_TOLLBOOTH_H
