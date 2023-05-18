﻿// Структуры и перечисления 2.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>

enum class months {
    Досвидания,
        Январь,
    	Февраль,
    	Март,
    	Апрель,
    	Май,
    	Июнь,
    	Июль,
    	Август,
    	Сентябрь,
    	Октябрь,
    	Ноябрь,
    	Декабрь
        
};

int main()
{
    setlocale(LC_ALL, "ru");

    int x;
    do {
        std::cout << "Введите номер месяца: ";
        std::cin >> x;   

        months m = static_cast<months>(x);

        switch (m) {
        case months::Январь:
            std::cout << "Январь" << std::endl;
            break;
        case months::Февраль:
            std::cout << "Февраль" << std::endl;
            break;
        case months::Март:
            std::cout << "Март" << std::endl;
            break;
        case months::Апрель:
            std::cout << "Апрель" << std::endl;
            break;
        case months::Май:
            std::cout << "Май" << std::endl;
            break;
        case months::Июнь:
            std::cout << "Июнь" << std::endl;
            break;
        case months::Июль:
            std::cout << "Июль" << std::endl;
            break;
        case months::Август:
            std::cout << "Август" << std::endl;
            break;
        case months::Сентябрь:
            std::cout << "Сентябрь" << std::endl;
            break;
        case months::Октябрь:
            std::cout << "Октябрь" << std::endl;
            break;
        case months::Ноябрь:
            std::cout << "Ноябрь" << std::endl;
            break;
        case months::Декабрь:
            std::cout << "Декабрь" << std::endl;
            break;
        case months::Досвидания:
            std::cout  << std::endl;
            break;
        default:
            std::cout << "Неправильный номер!" << std::endl;
            break;
        }
    
    } while (x != 0);
    std::cout << "До свидания" << std::endl;

    return 0;
}