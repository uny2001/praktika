// task_7_52.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	setlocale(LC_CTYPE, "Russian_Russia.1251");
    int n;
    std::cout << "Введите количество элементов: ";
    std::cin >> n;
    
    std::vector<double> numbers(n);
    
    // Вводим вещественные числа
    for (int i = 0; i < n; i++) {
        std::cout << "Введите номер " << (i+1) << ": ";
        std::cin >> numbers[i];
    }
    
    // Находим максимальное и минимальное число
    double minNumber = *min_element(numbers.begin(), numbers.end());
    double maxNumber = *max_element(numbers.begin(), numbers.end());
    
    std::cout << "Максимальное количество: " << maxNumber << std::endl;
    std::cout << "Минимальное количество: " << minNumber << std::endl;
     system("pause");
    return 0;
}

