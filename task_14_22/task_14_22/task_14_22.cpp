// task_14_22.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void changeFirstElement(vector<int>& numbers, int newValue) {

    if (!numbers.empty()) {
        numbers[0] = newValue;
    }
}

void changeFifthElement(vector<int>& numbers, int newValue) {
    if (numbers.size() >= 5) {
        numbers[4] = newValue;
    }
}

void changeKthElement(vector<int>& numbers, int k, int newValue) {
    if (k >= 1 && k <= numbers.size()) {
        numbers[k-1] = newValue;
    }
}

void changeLastElement(vector<int>& numbers, int newValue) {
    if (!numbers.empty()) {
        numbers[numbers.size()-1] = newValue;
    }
}

int main() {
    ifstream inputFile("input.txt");
    vector<int> numbers;

    int number;
    while (inputFile >> number) {
        numbers.push_back(number);
    }
    inputFile.close();

    int newValue;
		setlocale(LC_CTYPE, "Russian_Russia.1251");
    // �������� ������ �������
    cout << "������� ����� �������� ������� ��������: ";
    cin >> newValue;
    changeFirstElement(numbers, newValue);

    // �������� ����� �������
    cout << "������� ����� �������� ������ ��������: ";
    cin >> newValue;
    changeFifthElement(numbers, newValue);

    // �������� k-� �������
    int k;
    cout << "������� ����� �������� (k): ";
    cin >> k;
    cout << "������� ����� �������� " << k << "-�� ��������: ";
    cin >> newValue;
    changeKthElement(numbers, k, newValue);

    // �������� ��������� �������
    cout << "������� ����� �������� ���������� ��������: ";
    cin >> newValue;
    changeLastElement(numbers, newValue);

    // ������� ���������� ����
    ofstream outputFile("output.txt");
    for (int i = 0; i < numbers.size(); i++) {
        outputFile << numbers[i] << " ";
    }
    outputFile.close();
	 system("pause");
    return 0;
}

