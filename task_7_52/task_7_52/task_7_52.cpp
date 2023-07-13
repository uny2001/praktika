// task_7_52.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	setlocale(LC_CTYPE, "Russian_Russia.1251");
    int n;
    std::cout << "������� ���������� ���������: ";
    std::cin >> n;
    
    std::vector<double> numbers(n);
    
    // ������ ������������ �����
    for (int i = 0; i < n; i++) {
        std::cout << "������� ����� " << (i+1) << ": ";
        std::cin >> numbers[i];
    }
    
    // ������� ������������ � ����������� �����
    double minNumber = *min_element(numbers.begin(), numbers.end());
    double maxNumber = *max_element(numbers.begin(), numbers.end());
    
    std::cout << "������������ ����������: " << maxNumber << std::endl;
    std::cout << "����������� ����������: " << minNumber << std::endl;
     system("pause");
    return 0;
}

