// task_9_75.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>
#include <string>

using namespace std;

void printSymbolsBeforeComma(const string& sentence) {
    size_t commaIndex = sentence.find(",");
    if (commaIndex != string::npos) {
        for (size_t i = 0; i < commaIndex; i++) {
            cout << sentence[i];
        }
    }
}

int main() {
		setlocale(LC_CTYPE, "Russian_Russia.1251");
    string sentence;
    cout << "Введите предложение: ";
    getline(cin, sentence);

    // 1) Известно, что в предложении запятые имеются
    cout << "Вариант 1: ";
    printSymbolsBeforeComma(sentence);
    cout << endl;

    // 2) В предложении запятых может не быть
    cout << "Вариант 2: ";
    size_t commaIndex = sentence.find(",");
    if (commaIndex != string::npos) {
        printSymbolsBeforeComma(sentence);
    } else {
        cout << "Запятая не найдена";
    }
    cout << endl;
	 system("pause");
    return 0;
}


