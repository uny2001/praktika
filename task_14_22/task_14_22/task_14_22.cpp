// task_14_22.cpp: определяет точку входа для консольного приложения.
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
    // Изменить первый элемент
    cout << "Введите новое значение первого элемента: ";
    cin >> newValue;
    changeFirstElement(numbers, newValue);

    // Изменить пятый элемент
    cout << "Введите новое значение пятого элемента: ";
    cin >> newValue;
    changeFifthElement(numbers, newValue);

    // Изменить k-й элемент
    int k;
    cout << "Введите номер элемента (k): ";
    cin >> k;
    cout << "Введите новое значение " << k << "-го элемента: ";
    cin >> newValue;
    changeKthElement(numbers, k, newValue);

    // Изменить последний элемент
    cout << "Введите новое значение последнего элемента: ";
    cin >> newValue;
    changeLastElement(numbers, newValue);

    // Вывести измененный файл
    ofstream outputFile("output.txt");
    for (int i = 0; i < numbers.size(); i++) {
        outputFile << numbers[i] << " ";
    }
    outputFile.close();
	 system("pause");
    return 0;
}

