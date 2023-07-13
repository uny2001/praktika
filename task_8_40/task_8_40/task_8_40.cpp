// task_8_40.cpp: ���������� ����� ����� ��� ����������� ����������.
//
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <locale>
using namespace std;

vector<vector<int>> findDimensions(int v) {
	
	
    vector<vector<int>> result;

    for (int a = 1; a <= v; a++) {
        for (int b = 1; b <= v; b++) {
            for (int c = 1; c <= v; c++) {
                if (a * b * c == v) {
                    vector<int> dimensions;
                    dimensions.push_back(a);
                    dimensions.push_back(b);
                    dimensions.push_back(c);
                    result.push_back(dimensions);
                }
            }
        }
    }

    return result;
}

int main() {
	setlocale(LC_CTYPE, "Russian_Russia.1251");
    int v;
    cout << "������� �����: ";
    cin >> v;

    vector<vector<int>> dimensions = findDimensions(v);

    if (dimensions.empty()) {
        cout << "������� �� �������" << endl;
    }
    else {
        cout << "������� ������������� ���������������� � ������� " << v << ": " << endl;
        for (int i = 0; i < dimensions.size(); i++) {
            cout << "(";
            for (int j = 0; j < dimensions[i].size(); j++) {
                cout << dimensions[i][j];
                if (j < dimensions[i].size() - 1) {
                    cout << ", ";
                }
            }
            cout << ")" << endl;
        }
    }
	system("pause");
  
    return 0;
}