// task-4_125.cpp: ���������� ����� ����� ��� ����������� ����������.
//���� ����� ����� n (1 n 99), ������������ ������� �������� (� �����). ��� ����� ����� ���������� ����� "��� n ���", ��������, ��� ��� ��������� ��������� n ����� "���" ���� �������� �� ����� "���" ��� "����".

#include "stdafx.h"
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_CTYPE, "Russian_Russia.1251");
    int age;
    cout << "������� ������� (1-99): ";
    cin >> age;

    if (age >= 11 && age <= 14) {
        cout << "��� " << age << " ���" << endl;
    } else if (age % 10 == 1) {
        cout << "��� " << age << " ���" << endl;
    } else if (age % 10 >= 2 && age % 10 <= 4) {
        cout << "��� " << age << " ����" << endl;
    } else {
        cout << "��� " << age << " ���" << endl;
    }
	system("pause");
    return 0;
}
