// task_15_1.cpp: определяет точку входа для консольного приложения.
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
        cerr << "Ошибка открытия файла." << endl;
        return 1;
    }

    string phrase = "Здравствуй, мир!";
    outputFile << phrase;

    outputFile.close();

    cout << "Фраза успешно записана в файл." << endl;
	 system("pause");
    return 0;
}

