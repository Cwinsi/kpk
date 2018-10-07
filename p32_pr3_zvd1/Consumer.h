#include <string>

#ifndef P32_PR2_ZAV1_CONSUMER_H
#define P32_PR2_ZAV1_CONSUMER_H

class Consumer {
private:
    std::string name; /*<Назва приладу>*/
    float minV; /*<Мінімальна напруга>*/
    float maxV; /*<Максимальна напруга>*/
    int solidity; /*<Міцність приладу у значеннях від 0 до 100>*/
public:
    /**
     * Конструктор для задання параматрів будинку
     *
     * @param minV
     * @param maxV
     */
    Consumer(std::string name, float minV, float maxV);

    /**
     * Метод симолює роботу приладу в результаті чого змінюється
     * його міцність, від міцності залежить конфорт, який отримують
     * жителі цього будинку
     *
     * @param voltage
     */
    void work(float voltage);

    /**
     * @return міцність приладу
     */
    int getSolidity();

    /**
     * @return назва пристрою
     */
    std::string getName();
};


#endif //P32_PR2_ZAV1_CONSUMER_H
