﻿#include <iostream>
#include "Leaver2.h"

int main()
{
    setlocale(LC_ALL, "ru");
    char name_input[256];
    std::cout << "Введите имя: ";
    std::cin >> name_input;
    Leaver2 leaver1;
    std::cout << leaver1.leave(name_input);
    system("Pause");
    return 0;
}