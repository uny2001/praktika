// task_11_5.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() { setlocale(LC_CTYPE, "Russian_Russia.1251");
    srand(time(0)); // ������������� ���������� ��������� �����
    
    int weights[20];
    
    for (int i = 0; i < 20; i++) {
        weights[i] = rand() % 51 + 50; // ��������� ���������� ����� � ��������� �� 50 �� 100
    }

    cout << "�������� �����:" << endl;
    for (int i = 0; i < 20; i++) {
        cout << weights[i] << " ";
    }
    cout << endl;
	system("pause");
    return 0;
}

