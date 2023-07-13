// task_6_28.cpp: определяет точку входа для консольного приложения.
// 6 28.cpp: определяет точку входа для консольного приложения.
//Дано натуральное число, в котором все цифры различны. Определить: 
//а) порядковый номер его максимальной цифры, считая номера: 
//от конца числа; 
//от начала числа; 
//б) порядковый номер его минимальной цифры, считая номера: 
//от конца числа; 
//от начала числа. 
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian_Russia.1251");
	
	
    int number;
    std::cout << "Введите число: ";
    std::cin >> number;

    std::string numString = std::to_string(number);
    int len = numString.length();
    int maxIndexFromEnd = 0;
    int maxIndexFromStart = 0;
    int minIndexFromEnd = 0;
    int minIndexFromStart = 0;

    for (int i = 1; i < len; i++) {
        if (numString[i] > numString[maxIndexFromEnd])
            maxIndexFromEnd = i;
        if (numString[i] < numString[minIndexFromEnd])
            minIndexFromEnd = i;
    }

    for (int i = len - 2; i >= 0; i--) {
        if (numString[i] > numString[maxIndexFromStart])
            maxIndexFromStart = i;
        if (numString[i] < numString[minIndexFromStart])
            minIndexFromStart = i;
    }

    std::cout << "a) порядковый номер его максимальной цифры, считая номера: " << len - maxIndexFromEnd << std::endl;
    std::cout << "  Порядковый номер максимальной цифры с самого начала: " << maxIndexFromStart + 1 << std::endl;
    std::cout << "b) порядковый номер его минимальной цифры, считая номера: : " << len - minIndexFromEnd << std::endl;
    std::cout << "   Порядковый номер минимальной цифры с самого начала: " << minIndexFromStart + 1 << std::endl;
	system("pause");
    return 0;
}