// task_15_1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
		setlocale(LC_CTYPE, "Russian_Russia.1251");
    ofstream outputFile("output.txt");
    if (!outputFile) {
        cerr << "������ �������� �����." << endl;
        return 1;
    }

    string phrase = "����������, ���!";
    outputFile << phrase;

    outputFile.close();

    cout << "����� ������� �������� � ����." << endl;
	 system("pause");
    return 0;
}

