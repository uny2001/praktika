// task_5_20.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

int main() {
		setlocale(LC_CTYPE, "Russian_Russia.1251");
    std::cout << " вадратные корни:" << std::endl;
    
    for (int i = 1; i <= 9; i++) {
        double squareRoot = sqrt(i * 0.1);
        std::cout << squareRoot << std::endl;
    }
    system("pause");
  
    return 0;
}