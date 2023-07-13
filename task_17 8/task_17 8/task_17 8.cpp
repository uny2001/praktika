// task_17 8.cpp: определяет точку входа для консольного приложения.
//Известны массы в килограммах двадцати предметов (все значения разные). Оп-ределить массу предмета, являющегося "пятым из самых легких предметов".
#include "stdafx.h"
#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian_Russia.1251");
    const int N = 20; // количество предметов
    int masses[N]; // массив масс
    // ввод данных
    cout << "Введите массы предметов в кг: ";
    for (int i = 0; i < N; i++)
    {
        cin >> masses[i];
    }
    // поиск номера пятого по легкости предмета
    nth_element(masses, masses + 1, masses + N); // сортируем массив масс по возрастанию
    int index = 4; // номер элемента, который является пятым
    // вывод массы пятого по легкости элемента
    cout << masses[index] << endl;
    system("pause");
    return 0;
} 