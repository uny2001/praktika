// task_11_5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() { setlocale(LC_CTYPE, "Russian_Russia.1251");
    srand(time(0)); // Инициализация генератора случайных чисел
    
    int weights[20];
    
    for (int i = 0; i < 20; i++) {
        weights[i] = rand() % 51 + 50; // Генерация случайного числа в диапазоне от 50 до 100
    }

    cout << "Значения весов:" << endl;
    for (int i = 0; i < 20; i++) {
        cout << weights[i] << " ";
    }
    cout << endl;
	system("pause");
    return 0;
}

