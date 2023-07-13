// task_12_179.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>
#include <vector>

using namespace std;

// Функция заполнения массива симметрично относительно главной диагонали
void fillMainDiagonalSymmetric(vector<vector<int>>& array, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            array[i][j] = array[j][i];
        }
    }
}

// Функция заполнения массива симметрично относительно побочной диагонали
void fillSecondaryDiagonalSymmetric(vector<vector<int>>& array, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            array[i][j] = array[n-1-j][n-1-i];
        }
    }
}

// Функция вывода массива на экран
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
    cout << "Введите размерность массива (n x n): ";
    cin >> n;

    // Создание и инициализация массива
    vector<vector<int>> array(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            array[i][j] = i + j; // Можно использовать любые значения элементов
        }
    }

    cout << "Исходный массив:" << endl;
    printArray(array, n);

    cout << "Массив, симметричный относительно главной диагонали:" << endl;
    fillMainDiagonalSymmetric(array, n);
    printArray(array, n);

    cout << "Массив, симметричный относительно побочной диагонали:" << endl;
    fillSecondaryDiagonalSymmetric(array, n);
    printArray(array, n);
	system("pause");
    return 0;
}

