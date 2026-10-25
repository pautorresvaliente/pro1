#include <iostream>
using namespace std;

int main() {
    int num1, num2, otherNums;
    bool condition = false;
    cin >> num1 >> num2;

    while (cin >> otherNums && otherNums != 0) {
        if (num2 > num1 && num2 > otherNums && num2 > 3143) {
            condition = true;
        }
        num1 = num2;
        num2 = otherNums;
    }

    if (condition) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}