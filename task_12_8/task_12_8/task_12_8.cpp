// task_12_8.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_CTYPE, "Russian_Russia.1251");
    int array[3][3] = { {1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9} };
  
    int new_value_a = 13;
    int new_value_b = 5;
  
    int column_to_replace_a = 1; // индекс второго столбца (отсчет с нуля)
    int row_to_replace_b = 0; // индекс строки (отсчет с нуля)
    int column_to_replace_b = 2; // индекс столбца (отсчет с нуля)
  
    // Замена значения второго столбца на число 13
    for (int i = 0; i < 3; i++) {
        array[i][column_to_replace_a] = new_value_a;
    }
  
    // Замена значения элемента массива на число 5
    array[row_to_replace_b][column_to_replace_b] = new_value_b;
  
    // Вывод массива после замен
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
	system("pause");
  
    return 0;
}
