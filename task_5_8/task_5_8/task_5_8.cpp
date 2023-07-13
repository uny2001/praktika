// task_5_8.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

#include <iostream>

using namespace std;

double poundsToKilograms(int pounds) {
    return pounds * 453.0 / 1000;
}

int main() {
		setlocale(LC_CTYPE, "Russian_Russia.1251");
    cout << "Таблица соответствия между весом в фунтах и весом в килограммах:" << endl;
    cout << "Фунты\tКилограммы" << endl;

    for (int pounds = 1; pounds <= 10; pounds++) {
        double kilograms = poundsToKilograms(pounds);
        cout << pounds << "\t" << kilograms << endl;
    }
	 system("pause");
    return 0;
}


