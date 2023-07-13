// task_11_74.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <locale>
using namespace std;

int main() {
	setlocale(LC_CTYPE, "Russian_Russia.1251");
	
    int games[20] = {3, 1, 2, 3, 1, 2, 1, 3, 1, 2, 3, 1, 1, 2, 3, 3, 1, 2, 2, 3};
    int wins = 0, draws = 0, losses = 0;

    for (int i = 0; i < 20; i++) {
        if (games[i] == 3) {
            wins++;
        } else if (games[i] == 1) {
            draws++;
        } else if (games[i] == 2) {
            losses++;
        }
    }

    cout << "Количество побед: " << wins << endl;
    cout << "Количество ничьих: " << draws << endl;
    cout << "Количество поражений: " << losses << endl;
	system("pause");
    return 0;
}


