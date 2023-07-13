// task-4_125.cpp: определяет точку входа для консольного приложения.
//Дано целое число n (1 n 99), определяющее возраст человека (в годах). Для этого числа напечатать фразу "мне n лет", учитывая, что при некоторых значениях n слово "лет" надо заменить на слово "год" или "года".

#include "stdafx.h"
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_CTYPE, "Russian_Russia.1251");
    int age;
    cout << "Введите возраст (1-99): ";
    cin >> age;

    if (age >= 11 && age <= 14) {
        cout << "Мне " << age << " лет" << endl;
    } else if (age % 10 == 1) {
        cout << "Мне " << age << " год" << endl;
    } else if (age % 10 >= 2 && age % 10 <= 4) {
        cout << "Мне " << age << " года" << endl;
    } else {
        cout << "Мне " << age << " лет" << endl;
    }
	system("pause");
    return 0;
}
