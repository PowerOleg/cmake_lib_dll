#include <iostream>
#include "Greater.h"

int main()
{
    setlocale(LC_ALL, "ru");
    char name_input[256];
    std::cout << "Введите имя: ";
    std::cin >> name_input;
    Greater greater1;
    std::cout << greater1.greet(name_input);
    system("Pause");
    return 0;
}
