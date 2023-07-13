// task_17_17.cpp: определяет точку входа для консольного приложения.
//


#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <locale>

int sortDigitsDescending(int number) {
		setlocale(LC_CTYPE, "Russian_Russia.1251");
    std::vector<int> digits;

    while (number > 0) {
        digits.push_back(number % 10);
        number /= 10;
    }

    std::sort(digits.rbegin(), digits.rend());

    int result = 0;
    for (int digit : digits) {
        result = result * 10 + digit;
    }

    return result;
}

int sortDigitsAscending(int number) {
    std::vector<int> digits;

    while (number > 0) {
        digits.push_back(number % 10);
        number /= 10;
    }

    std::sort(digits.begin(), digits.end());

    int result = 0;
    bool leadingZero = true;
    for (int digit : digits) {
        if (leadingZero && digit == 0) {
            continue;
        }
        leadingZero = false;
        result = result * 10 + digit;
    }

    return result;
}

int main() {
    setlocale(LC_ALL, "Rus");
    int number;
    std::cout << "Введите натуральное число: ";
    std::cin >> number;

    int descending = sortDigitsDescending(number);
    int ascending = sortDigitsAscending(number);

    std::cout << "По убыванию: " << descending << std::endl;
    std::cout << "По возрастанию: " << ascending << std::endl;
    system("pause");
    return 0;
}
