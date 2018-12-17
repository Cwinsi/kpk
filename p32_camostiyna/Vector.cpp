#include "Vector.h"
#include <iostream>

Vector::Vector(int size) {
    this->nums = new float[size];
    this->size = size;

    for(int i = 0; i < this->size; i++) {
        this->nums[i] = 0;
    }
}

float Vector::get(int index) {
    return this->nums[index];
}

void Vector::set(int index, float value) {
    this->nums[index] = value;
}

float Vector::multiply(Vector vector) {
    float multiply = 0;

    for(int i = 0; i < this->size; i++) {
        multiply += this->nums[i] * vector.get(i);
    }

    return multiply;
}

void Vector::multiplyToNumber(float number) {
    for(int i = 0; i < this->size; i++) {
        this->nums[i] *= number;
    }
}

void Vector::add(Vector vector) {
    for(int i = 0; i < this->size; i++) {
        this->nums[i] += vector.get(i);
    }
}

void Vector::print() {
    std::cout << "[ ";

    for(int i = 0; i < this->size; i++) {
        std::cout << this->nums[i] << " ";
    }

    std::cout << "]" << std::endl;
}

void Vector::input() {
    for(int i = 0; i < this->size; i++) {
        std::cout << "[" << i << "] = ";
        std::cin >> this->nums[i];
    }
}

void Vector::subtract(Vector vector) {
    for(int i = 0; i < this->size; i++) {
        this->nums[i] -= vector.get(i);
    }
}
