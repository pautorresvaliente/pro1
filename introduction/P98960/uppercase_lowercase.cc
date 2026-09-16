// Write a program that reads a letter and prints it in lowercase if it was uppercase, or prints it in uppercase if it was lowercase.

// Input
// Input consists of a letter.

// Output
// Print a line with the given letter in lowercase if it was uppercase, or in uppercase if it was lowercase.

#include <iostream>
#include <cctype>

using namespace std;

int main() {
    char letter;

    cin >> letter;

    if (islower(letter)) {
        letter = (char)toupper(letter);
    }
    else {
        letter = (char)tolower(letter);
    }

    cout << letter << endl;

    return 0;
}