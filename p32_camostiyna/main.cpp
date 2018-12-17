#include <iostream>
#include "Vector.h"
#include "Matrix.h"

int main() {
    Matrix matrix(2, 2);
    Matrix matrix1(2, 2);

    matrix.set(0, 0, 4);
    matrix.set(0, 1, 6);
    matrix.set(1, 0, 7);
    matrix.set(1, 1, 2);

    matrix1.set(0, 0, 1);
    matrix1.set(0, 1, 2);
    matrix1.set(1, 0, 1);
    matrix1.set(1, 1, 2);

    matrix.print();
    std::cout << "-" << std::endl;
    matrix1.print();
    std::cout << "=" << std::endl;
    matrix.subtract(matrix1);
    matrix.print();

    std::cout << "___________________" << std::endl;

    matrix.print();
    std::cout << "+" << std::endl;
    matrix.print();
    std::cout << "=" << std::endl;
    matrix.add(matrix);
    matrix.print();

    std::cout << "___________________" << std::endl;

    Matrix matrix2 = Matrix::multiply(matrix, matrix1);
    matrix.print();
    std::cout << "*" << std::endl;
    matrix1.print();
    std::cout << "=" << std::endl;
    matrix2.print();

    return 0;
}