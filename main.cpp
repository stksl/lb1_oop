#include "progression.h"
#include <iostream>
#include <windows.h>
int main() {
    SetConsoleOutputCP(CP_UTF8);

    progression pr1;
    pr1.Init(10, 2);

    std::cout << "6-й елемент прогресії: " << pr1.elementj(5);

    progression pr2;
    pr2.Read();

    unsigned int j;
    std::cout << "Елемент прогресії для знаходження (0 - " << UINT_MAX << "): ";
    std::cin >> j;

    std::cout << j + 1 << "-й елемент прогресії: " << pr2.elementj(j);
    system("pause");
    return 0;
}