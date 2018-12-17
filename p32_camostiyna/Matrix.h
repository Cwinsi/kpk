#ifndef P32_CAMOSTIYNA_MATRIX_H
#define P32_CAMOSTIYNA_MATRIX_H

#include "Vector.h"

class Matrix {
private:
    Vector **vectors;
    int height, width;
public:
    Matrix(int height, int width);

    void set(int height, int width, float value);

    void add(Matrix &matrix);
    void subtract(Matrix &matrix);

    static Matrix multiply(Matrix &matrix1, Vector &vector);
    static Matrix multiply(Matrix &matrix1, Matrix &matrix2);

    Vector getColumnVector(int index);
    Vector getRowVector(int index);

    void print();
    void input();

    int getHeight();
    int getWidth();
};

#endif //P32_CAMOSTIYNA_MATRIX_H
