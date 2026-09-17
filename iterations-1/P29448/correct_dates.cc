#include <iostream>
using namespace std;

int main() {
    int day, month, year;
    bool isLeap = false;
    bool isCorrect = true;

    cin >> day >> month >> year;

    if (year % 4 == 0) {
        if (year % 100 != 0) {
            isLeap = true;
        } else {
            year /= 100;
            if (year % 4 == 0) {
                isLeap = true;
            }
        }
    }
    if (year < 0) isCorrect = false;
    if (month > 12 || month < 1) isCorrect = false;
    if (month == 2) {
        if (day < 1 || (isLeap ? day > 29 : day > 28)) isCorrect = false;
    } else if (month == 4 || month == 6 || month == 9 || month== 11) {
        if (day < 1 || day > 30) isCorrect = false;
    } else {
        if (day < 1 || day > 31) isCorrect = false;
    }

    cout << (isCorrect ? "Correct Date" : "Incorrect Date") << endl;
}

// Find the most efficient way
