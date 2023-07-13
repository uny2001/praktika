// task_9_167.cpp: определяет точку входа для консольного приложения.
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
    cout << "Введите предложение: ";
    getline(cin, sentence);

    vector<string> words = getWords(sentence);

    cout << "Слова, отличные от слова 'привет': ";
    for (string word : words) {
        if (word != "привет") {
            cout << word << " ";
        }
    }
    cout << endl;
	 system("pause");
    return 0;
}
