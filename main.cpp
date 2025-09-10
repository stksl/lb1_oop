#include "progression.h"
#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    progression pr1;
    pr1.Init(10, 2);

    pr1.Display();
    cout << "6-й елемент прогресії: " << pr1.elementj(5);
    cout << endl;

    progression pr2;
    pr2.Read();

    unsigned short j;
    cout << "Елемент прогресії для знаходження (0 - " << USHRT_MAX << "): ";
    cin >> j;
    pr2.Display();

    cout << j + 1 << "-й елемент прогресії: " << pr2.elementj(j);
    cout << endl;


    system("pause");
    return 0;
}