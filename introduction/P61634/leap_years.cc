#include <iostream>
using namespace std;

int main() {
    int year;
    bool isLeap = false;
    cin >> year;
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
    cout << (isLeap ? "YES" : "NO") << endl;
}