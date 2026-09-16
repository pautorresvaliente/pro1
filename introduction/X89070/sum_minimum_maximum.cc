// Write a program that reads three numbers and prints the sum of their minimum and maximum values.

// Input
// Input consists of three integer numbers.

// Output
// Print a line with the sum of the maximum and the minimum of the three numbers.

#include <iostream>
using namespace std;
int main () {
    int x, y, z, minimum, maximum;
    
    cin >> x >> y >> z;

    if (x > y) {
        if (x > z) {
            maximum = x;
            minimum = y < z ? y : z;
        }
        else {
            maximum = z;
            minimum = y;
        }
    } 
    else {
        if (y > z) {
            maximum = y;
            minimum = x < z ? x : z;
        }
        else {
            maximum = z;
            minimum = x;
        }
    }

    cout << maximum + minimum << endl;

    return 0;
}