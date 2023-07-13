// task_6_80.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int countDigitFrequency(int number, int digit) {
    int count = 0;
    while (number != 0) {
        int currentDigit = number % 10;
        if (currentDigit == digit) {
            count++;
        }
        number /= 10;
    }
    return count;
}

int main() {
		setlocale(LC_CTYPE, "Russian_Russia.1251");
    int number;
    cout << "Введите натуральное число: ";
    cin >> number;

    if (number < 0) {
        cout << "Введено некорректное число." << endl;
        return 1;
    }

    int frequencyOfZero = countDigitFrequency(number, 0);
    int frequencyOfNine = countDigitFrequency(number, 9);

    if (frequencyOfZero > frequencyOfNine) {
        cout << "Чаще встречается цифра 0." << endl;
    } else if (frequencyOfZero < frequencyOfNine) {
        cout << "Чаще встречается цифра 9." << endl;
    } else {
        cout << "Цифры 0 и 9 встречаются одинаковое количество раз." << endl;
    }
	system("pause");
    return 0;
}

