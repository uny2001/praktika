// task_5_15.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <iostream>

using namespace std;

int main() {
			setlocale(LC_CTYPE, "Russian_Russia.1251");
    int n;
    cout << "������� ����� n (�� 1 �� 9): ";
    cin >> n;

    if (n < 1 || n > 9) {
        cout << "������������ ��������." << endl;
        return 1;
    }

    cout << "������� ��������� �� " << n << ":" << endl;

    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
	 system("pause");
    return 0;
}
