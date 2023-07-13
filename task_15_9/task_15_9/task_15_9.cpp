// task_15_9.cpp: определяет точку входа для консольного приложения.
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
    ifstream file("text.txt"); // открываем файл для чтения
    int count = 0; // переменная для подсчета символов
    // читаем символы из файла и увеличиваем счетчик
    while (getline(file, line)) {
        count += line.length();
    }
    cout << count << endl; // выводим символ на экран
    file.close(); // закрываем файл
    system("pause");

    return 0;
}