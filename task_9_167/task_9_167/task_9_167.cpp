// task_9_167.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <windows.h>

using namespace std;

vector<string> getWords(string sentence) {
	
    vector<string> words;
    stringstream ss(sentence);

    string word;
    while (ss >> word) {
        words.push_back(word);
    }

    return words;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    string sentence;
    cout << "������� �����������: ";
    getline(cin, sentence);

    vector<string> words = getWords(sentence);

    cout << "�����, �������� �� ����� '������': ";
    for (string word : words) {
        if (word != "������") {
            cout << word << " ";
        }
    }
    cout << endl;
	 system("pause");
    return 0;
}
