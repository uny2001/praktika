// task_17_11.cpp: ���������� ����� ����� ��� ����������� ����������.
//�������� ���� 18 �������. ���������� ������� �������������� ����� ��� ����� �����, ������� �� ��������� � �������� ������� � ������ ���������� �� �� �������.

#include "stdafx.h"
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	setlocale(LC_CTYPE, "Russian_Russia.1251");
    int heights[18] = {170, 165, 180, 175, 160, 155, 185, 190, 172, 168, 176, 162, 169, 179, 171, 166, 174, 177};

    sort(heights, heights + 18); // ���������� ������� ������ � ������� �����������

    int middle_indexes[2];
    middle_indexes[0] = 18 / 2 - 1;   // ������ ������� �������� � �������� ����������
    middle_indexes[1] = 18 / 2;       // ������ ������� �������� � �������� ����������

    int sum = heights[middle_indexes[0]] + heights[middle_indexes[1]];
    int average = sum / 2;

    cout << "������� �������������� ����� ���� ����� � �������� ����������: " << average << endl;
	system("pause");
    return 0;
}
