// task_17 8.cpp: ���������� ����� ����� ��� ����������� ����������.
//�������� ����� � ����������� �������� ��������� (��� �������� ������). ��-�������� ����� ��������, ����������� "����� �� ����� ������ ���������".
#include "stdafx.h"
#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian_Russia.1251");
    const int N = 20; // ���������� ���������
    int masses[N]; // ������ ����
    // ���� ������
    cout << "������� ����� ��������� � ��: ";
    for (int i = 0; i < N; i++)
    {
        cin >> masses[i];
    }
    // ����� ������ ������ �� �������� ��������
    nth_element(masses, masses + 1, masses + N); // ��������� ������ ���� �� �����������
    int index = 4; // ����� ��������, ������� �������� �����
    // ����� ����� ������ �� �������� ��������
    cout << masses[index] << endl;
    system("pause");
    return 0;
} 