// task_11_234.cpp: ���������� ����� ����� ��� ����������� ����������.
//
//
#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <locale>
using namespace std;
struct Point {
    int x;
    int y;
};

// ������� ��� ���������� ��������� ��������������� ����� ��������������
void findOppositeCorners(Point points[], int size) {
    int min_x = points[0].x;
    int max_x = points[0].x;
    int min_y = points[0].y;
    int max_y = points[0].y;

    // ������� ���������� � ���������� �������� ���������
    for (int i = 1; i < size; i++) {
        min_x = std::min(min_x, points[i].x);
        max_x = std::max(max_x, points[i].x);
        min_y = std::min(min_y, points[i].y);
        max_y = std::max(max_y, points[i].y);
    }

    // ������� ���������� ��������������� ����� ��������������
    std::cout << "����� ������ ����: (" << min_x << ", " << min_y << ")" << std::endl;
    std::cout << "������ ������� ����: (" << max_x << ", " << max_y << ")" << std::endl;
}

int main() {
    setlocale(LC_ALL, "Rus");

    // ������� ������ �� 20 �����
    Point points[20] = {
        {1, 2},
        {3, 4},
        // ...
        {19, 20},
        {21, 22}
    };

    // �������� ������� ��� ���������� ��������� ��������������� ����� ��������������
    findOppositeCorners(points, 20);
	system("pause");
    return 0;
}

