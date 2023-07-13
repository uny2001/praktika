// task_12_179.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

#include <iostream>
#include <vector>

using namespace std;

// ������� ���������� ������� ����������� ������������ ������� ���������
void fillMainDiagonalSymmetric(vector<vector<int>>& array, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            array[i][j] = array[j][i];
        }
    }
}

// ������� ���������� ������� ����������� ������������ �������� ���������
void fillSecondaryDiagonalSymmetric(vector<vector<int>>& array, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            array[i][j] = array[n-1-j][n-1-i];
        }
    }
}

// ������� ������ ������� �� �����
void printArray(vector<vector<int>>& array, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
		setlocale(LC_CTYPE, "Russian_Russia.1251");
    int n;
    cout << "������� ����������� ������� (n x n): ";
    cin >> n;

    // �������� � ������������� �������
    vector<vector<int>> array(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            array[i][j] = i + j; // ����� ������������ ����� �������� ���������
        }
    }

    cout << "�������� ������:" << endl;
    printArray(array, n);

    cout << "������, ������������ ������������ ������� ���������:" << endl;
    fillMainDiagonalSymmetric(array, n);
    printArray(array, n);

    cout << "������, ������������ ������������ �������� ���������:" << endl;
    fillSecondaryDiagonalSymmetric(array, n);
    printArray(array, n);
	system("pause");
    return 0;
}

