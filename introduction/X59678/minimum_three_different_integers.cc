#include <iostream>
using namespace std;

// Write a program that reads three numbers and prints their minimum.

// Input
// Input consists of three different integer numbers.

// Output
// Print a line with the minimum of the three numbers.

int main() {
    int val1, val2, val3;
    int output;

    cin >> val1 >> val2 >> val3;

    if (val1 < val2) {
        if (val1 < val3) {
            output = val1;
        } else {
            output = val3;
        }
    } else {
        if (val2 < val3) {
            output = val2;
        } else {
            output = val3;
        }
    }

    cout << output << endl;
}