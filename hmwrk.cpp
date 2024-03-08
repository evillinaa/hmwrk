#include <iostream>
#include <Windows.h>
#include <cmath>


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

   /* int a;
    int sum = 0;
    std::cout << "Введите число a: ";
    std::cin >> a;

    if (a < 1 || a > 500) {
        std::cout << "Ошибка! Число должно быть от 1 до 500.";
            return 0;
    }

    for (int i = a; i <= 500; i++) {
        sum += i;
    }

    std::cout << "Сумма чисел от " << a << " до 500: " << sum;

        return 0;*/
    /*int x;
    int y;
    std::cout << "Введите x: ";
    std::cin >> x;
    std::cout << "Введите y: ";
    std::cin >> y;
    double result = std::pow(x, y);
    std::cout << "Результат: " << result;
    return 0;*/

   /* int counter = 0;
    for (int i = 0; i <= 1000; i++)
        counter += i;

    std::cout << static_cast<double>(counter) / 1000.0;
    return 0;*/

    /*int a;
    std::cout << "Введите значение переменной a: ";
    std::cin >> a;

    if (a < 1 || a > 20) {
        std::cout << "Ошибка!";
         
    }
    int product = 1;

    for (int i = a; i <= 20; i++) {
        product *= i;
    }

    std::cout << "Произведение всех целых чисел от " << a << " до 20: " << product;

        return 0;*/

    int k;
    std::cout << "Введите номер варианта: ";
    std::cin >> k;

    std::cout << "Таблица умножения на " << k;

    for (int i = 2; i <= 10; ++i) {
        int result = k * i;
        std::cout << k << " x " << i << " = " << result;
    }

    return 0;
}

