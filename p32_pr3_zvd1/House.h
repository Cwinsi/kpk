#include <vector>
#include "Consumer.h"

#ifndef P32_PR2_ZAV1_HOUSE_H
#define P32_PR2_ZAV1_HOUSE_H

class House {
private:
    int number; /*<Номер будинку>*/
    std::vector<Consumer*> consumers; /*<Вектор з приладами в будинку>*/
public:
    static float voltage; /*<напруга в усіх будинках>*/
    void setVoltage(float volta);
    /**
     * Конструктор для задання параметрів будинку
     *
     * @param number Номер будинку від нуля і більше
     */
    House(int number);

    /**
     * @param consumer прилад який буде добалено в будинок
     */
    void addConsumer(Consumer *consumer);

    /**
     * Відмалювати таблицю з даними про поламані
     * пристрої і конфорт жителів
     */
    const void drawComfort();
};


#endif //P32_PR2_ZAV1_HOUSE_H
