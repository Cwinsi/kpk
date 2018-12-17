#include "Matrix.h"

Matrix::Matrix(int height, int width) {
    this->height = height;
    this->width = width;

    this->vectors = new Vector*[height];

    for(int i = 0; i < this->height; i++) {
        this->vectors[i] = new Vector(width);
    }
}

Vector Matrix::getRowVector(int index) {
    Vector vector(height);

    for(int i = 0; i < this->height; i++) {
        vector.set(i, this->vectors[index]->get(i));
    }

    return vector;
}

Vector Matrix::getColumnVector(int index) {
    Vector vector(height);

    for(int i = 0; i < this->height; i++) {
        vector.set(i, this->vectors[i]->get(index));
    }

    return vector;
}

void Matrix::add(Matrix &matrix) {
    for(int i = 0; i < this->height; i++) {
        this->vectors[i]->add(matrix.getRowVector(i));
    }
}

void Matrix::subtract(Matrix &matrix) {
    for(int i = 0; i < this->height; i++) {
        this->vectors[i]->subtract(matrix.getRowVector(i));
    }
}

Matrix Matrix::multiply(Matrix &matrix1, Vector &vector) {
    Matrix matrix(matrix1.getHeight(), 1);

    for(int i = 0; i < matrix1.getHeight(); i++) {
        matrix.set(i, 0, ( matrix1.getRowVector(i).multiply(vector)));
    }

    return matrix;
}

Matrix Matrix::multiply(Matrix &matrix1, Matrix &matrix2) {
    Matrix matrix(matrix1.getHeight(), matrix2.getWidth());

    for(int i = 0; i < matrix1.getHeight(); i++) {
        for(int j = 0; j < matrix2.getWidth(); j++) {
            matrix.set(i, j, ( matrix1.getRowVector(i).multiply(matrix2.getColumnVector(j))));
        }
    }

    return matrix;
}

void Matrix::print() {
    for(int i = 0; i < this->height; i++) {
        this->vectors[i]->print();
    }
}

void Matrix::input() {
    for(int i = 0; i < this->height; i++) {
        this->vectors[i]->input();
    }
}

int Matrix::getHeight() {
    return this->height;
}

int Matrix::getWidth() {
    return this->width;
}

void Matrix::set(int height, int width, float value) {
    this->vectors[height]->set(width, value);
}
