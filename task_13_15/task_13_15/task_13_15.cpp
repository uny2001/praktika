// task_13_15.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"
#include <iostream>
#include "stdafx.h"
#include <iostream>
#include <string>
#include <locale>

struct Event {
    int year;
    int month;
    int day;
    std::string text;
};

bool isLater(const Event& event1, const Event& event2) {
    if (event1.year > event2.year) {
        return true;
    }
    else if (event1.year < event2.year) {
        return false;
    }
    else {
        if (event1.month > event2.month) {
            return true;
        }
        else if (event1.month < event2.month) {
            return false;
        }
        else {
            if (event1.day > event2.day) {
                return true;
            }
            else if (event1.day < event2.day) {
                return false;
            }
            else {
                return event1.text > event2.text;
            }
        }
    }
}

int main() {
    setlocale(LC_ALL, "Rus");

    Event event1, event2;

    std::cout << "¬ведите данные первого событи€ (год, мес€ц, день): ";
    std::cin >> event1.year >> event1.month >> event1.day;

    std::cout << "¬ведите текст первого событи€: ";
    std::getline(std::cin >> std::ws, event1.text);

    std::cout << "¬ведите данные второго событи€ (год, мес€ц, день): ";
    std::cin >> event2.year >> event2.month >> event2.day;

    std::cout << "¬ведите текст второго событи€: ";
    std::getline(std::cin >> std::ws, event2.text);

    if (isLater(event1, event2)) {
        std::cout << "ѕервое событие произошло позже" << std::endl;
    }
    else {
        std::cout << "¬торое событие произошло позже" << std::endl;
    }
    system("pause");
    return 0;
}	
