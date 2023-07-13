// task_17_11.cpp: определяет точку входа для консольного приложения.
//Известен рост 18 человек. Определить среднее арифметическое роста тех двоих людей, которые бы оказались в середине шеренги в случае построения ее по ранжиру.

#include "stdafx.h"
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	setlocale(LC_CTYPE, "Russian_Russia.1251");
    int heights[18] = {170, 165, 180, 175, 160, 155, 185, 190, 172, 168, 176, 162, 169, 179, 171, 166, 174, 177};

    sort(heights, heights + 18); // Сортировка массива ростов в порядке возрастания

    int middle_indexes[2];
    middle_indexes[0] = 18 / 2 - 1;   // Индекс первого человека в середине ранжировки
    middle_indexes[1] = 18 / 2;       // Индекс второго человека в середине ранжировки

    int sum = heights[middle_indexes[0]] + heights[middle_indexes[1]];
    int average = sum / 2;

    cout << "Среднее арифметическое роста двух людей в середине ранжировки: " << average << endl;
	system("pause");
    return 0;
}
