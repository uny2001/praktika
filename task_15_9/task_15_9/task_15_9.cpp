// task_15_9.cpp: ���������� ����� ����� ��� ����������� ����������.
//
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <iterator>
#include <string>

using namespace std;
int main() {
    setlocale(LC_CTYPE, "Russian_Russia.1251");
    string line;
    ifstream file("text.txt"); // ��������� ���� ��� ������
    int count = 0; // ���������� ��� �������� ��������
    // ������ ������� �� ����� � ����������� �������
    while (getline(file, line)) {
        count += line.length();
    }
    cout << count << endl; // ������� ������ �� �����
    file.close(); // ��������� ����
    system("pause");

    return 0;
}