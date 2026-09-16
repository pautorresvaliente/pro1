#include <iostream>
using namespace std;

// Write a program that reads two numbers and prints their minimum.

// Input
// Input consists of two integer numbers.

// Output
// Print a line with the minimum of the two numbers.

int main() {
    int val1, val2;
    cin >> val1 >> val2;
    cout << (val1 < val2 ? val1 : val2) << endl;
}