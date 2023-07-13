// task_5_15.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <iostream>

using namespace std;

int main() {
			setlocale(LC_CTYPE, "Russian_Russia.1251");
    int n;
    cout << "Введите число n (от 1 до 9): ";
    cin >> n;

    if (n < 1 || n > 9) {
        cout << "Некорректное значение." << endl;
        return 1;
    }

    cout << "Таблица умножения на " << n << ":" << endl;

    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
	 system("pause");
    return 0;
}
