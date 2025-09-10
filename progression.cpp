#include <iostream>
#include "progression.h"
#include <math.h>
progression* progression::Init(double f, double s) {
    this->first = f;
    this->second = s;

    return this;
}
void progression::Read() {
    std::cout << "Перший елемент прогресії: ";
    std::cin >> this->first;

    std::cout << "Крок (r): ";
    std::cin >> this->second;
}
void progression::Display() {
    std::cout << "Перший елемент прогресії: " << this->first << std::endl;
    std::cout << "Крок: " << this->second << std::endl;
}
double progression::elementj(unsigned short j) {
    return this->first * pow(this->second, j);
}