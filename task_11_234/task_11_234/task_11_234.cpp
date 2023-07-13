// task_11_234.cpp: определяет точку входа для консольного приложения.
//
//
#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <locale>
using namespace std;
struct Point {
    int x;
    int y;
};

// Функция для нахождения координат противоположных углов прямоугольника
void findOppositeCorners(Point points[], int size) {
    int min_x = points[0].x;
    int max_x = points[0].x;
    int min_y = points[0].y;
    int max_y = points[0].y;

    // Находим наименьшие и наибольшие значения координат
    for (int i = 1; i < size; i++) {
        min_x = std::min(min_x, points[i].x);
        max_x = std::max(max_x, points[i].x);
        min_y = std::min(min_y, points[i].y);
        max_y = std::max(max_y, points[i].y);
    }

    // Выводим координаты противоположных углов прямоугольника
    std::cout << "Левый нижний угол: (" << min_x << ", " << min_y << ")" << std::endl;
    std::cout << "Правый верхний угол: (" << max_x << ", " << max_y << ")" << std::endl;
}

int main() {
    setlocale(LC_ALL, "Rus");

    // Создаем массив из 20 точек
    Point points[20] = {
        {1, 2},
        {3, 4},
        // ...
        {19, 20},
        {21, 22}
    };

    // Вызываем функцию для нахождения координат противоположных углов прямоугольника
    findOppositeCorners(points, 20);
	system("pause");
    return 0;
}

