// task_6_28.cpp: ���������� ����� ����� ��� ����������� ����������.
// 6 28.cpp: ���������� ����� ����� ��� ����������� ����������.
//���� ����������� �����, � ������� ��� ����� ��������. ����������: 
//�) ���������� ����� ��� ������������ �����, ������ ������: 
//�� ����� �����; 
//�� ������ �����; 
//�) ���������� ����� ��� ����������� �����, ������ ������: 
//�� ����� �����; 
//�� ������ �����. 
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian_Russia.1251");
	
	
    int number;
    std::cout << "������� �����: ";
    std::cin >> number;

    std::string numString = std::to_string(number);
    int len = numString.length();
    int maxIndexFromEnd = 0;
    int maxIndexFromStart = 0;
    int minIndexFromEnd = 0;
    int minIndexFromStart = 0;

    for (int i = 1; i < len; i++) {
        if (numString[i] > numString[maxIndexFromEnd])
            maxIndexFromEnd = i;
        if (numString[i] < numString[minIndexFromEnd])
            minIndexFromEnd = i;
    }

    for (int i = len - 2; i >= 0; i--) {
        if (numString[i] > numString[maxIndexFromStart])
            maxIndexFromStart = i;
        if (numString[i] < numString[minIndexFromStart])
            minIndexFromStart = i;
    }

    std::cout << "a) ���������� ����� ��� ������������ �����, ������ ������: " << len - maxIndexFromEnd << std::endl;
    std::cout << "  ���������� ����� ������������ ����� � ������ ������: " << maxIndexFromStart + 1 << std::endl;
    std::cout << "b) ���������� ����� ��� ����������� �����, ������ ������: : " << len - minIndexFromEnd << std::endl;
    std::cout << "   ���������� ����� ����������� ����� � ������ ������: " << minIndexFromStart + 1 << std::endl;
	system("pause");
    return 0;
}