// Write a program that reads an alphabetical character and tells whether it is a letter (uppercase or lowercase) or a number.

// Input
// Input consists of an alphabetical character (never a punctuation sign).

// Output
// Print a line indicating the type of the character given. Follow the format of the examples.

#include <iostream>

using namespace std;

int main () {
    char val;

    cin >> val;

    if (isupper(val)) {
        cout << "Uppercase letter" << endl;
    }
    else if (islower(val)) {
        cout << "Lowercase letter" << endl;
    }
    else {
        cout << "Number" << endl;
    }

    return 0;
}