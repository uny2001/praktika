// task_9_75.cpp: ���������� ����� ����� ��� ����������� ����������.
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
    cout << "������� �����������: ";
    getline(cin, sentence);

    // 1) ��������, ��� � ����������� ������� �������
    cout << "������� 1: ";
    printSymbolsBeforeComma(sentence);
    cout << endl;

    // 2) � ����������� ������� ����� �� ����
    cout << "������� 2: ";
    size_t commaIndex = sentence.find(",");
    if (commaIndex != string::npos) {
        printSymbolsBeforeComma(sentence);
    } else {
        cout << "������� �� �������";
    }
    cout << endl;
	 system("pause");
    return 0;
}


