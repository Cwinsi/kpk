#ifndef P32_CAMOSTIYNA_VECTOR_H
#define P32_CAMOSTIYNA_VECTOR_H

#include <cmath>
#include <type_traits>

class Vector {
private:
    int size;
    float *nums;
public:
    explicit Vector(int size);
    
    float get(int index);
    void set(int index, float value);

    float multiply(Vector vector);
    void multiplyToNumber(float number);

    void add(Vector vector);
    void subtract(Vector vector);

    void print();
    void input();

};

#endif
