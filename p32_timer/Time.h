#ifndef P32_TIMER_TIME_H
#define P32_TIMER_TIME_H


class Time {
private:
    int godinochki;
    int hvilinochki;
    int secundochki;
public:
    Time();
    Time(int godinochki, int hvilinochki, int secundochki);

    int getGodinochki();
    int getHvilinochki();
    int getSecundochki();

    void out();
    static Time add(Time time1, Time time2);
};


#endif //P32_TIMER_TIME_H
