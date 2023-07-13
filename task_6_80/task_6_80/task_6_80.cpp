// task_6_80.cpp: ���������� ����� ����� ��� ����������� ����������.
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
    cout << "������� ����������� �����: ";
    cin >> number;

    if (number < 0) {
        cout << "������� ������������ �����." << endl;
        return 1;
    }

    int frequencyOfZero = countDigitFrequency(number, 0);
    int frequencyOfNine = countDigitFrequency(number, 9);

    if (frequencyOfZero > frequencyOfNine) {
        cout << "���� ����������� ����� 0." << endl;
    } else if (frequencyOfZero < frequencyOfNine) {
        cout << "���� ����������� ����� 9." << endl;
    } else {
        cout << "����� 0 � 9 ����������� ���������� ���������� ���." << endl;
    }
	system("pause");
    return 0;
}

