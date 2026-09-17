#include <iostream>
using namespace std;


bool isLeapYear (int year) {
    if (year % 4 == 0) {
        if (year % 100 != 0) {
            return true;
        } else {
            year /= 100;
            if (year % 4 == 0) {
                return true;
            }
        }
    }
    return false;
}

bool isCorrect (int day, int month, int year) {
    if (year < 0) return false;
        if (month > 12 || month < 1) return false;
        if (month == 2) {
            if (day < 1 || (isLeapYear(year) ? day > 29 : day > 28)) return false;
        } else if (month == 4 || month == 6 || month == 9 || month== 11) {
            if (day < 1 || day > 30) return false;
        } else {
            if (day < 1 || day > 31) return false;
    }
    return true;
}

int main() {
    int day, month, year;
    
    while (cin >> day >> month >> year) {
        cout << (isCorrect(day, month, year) ? "Correct Date" : "Incorrect Date") << endl;
    }
}