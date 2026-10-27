#include <iostream>
#include <algorithm>
using namespace std;

int char_to_base64(char c) {
    static char _syms[65] =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz"
        "0123456789+/";
    return std::find(_syms, _syms + 64, c) - _syms;
}

// Digit of a character in a quartet. The padding '=' counts as 0.
int digit(char c) {
    if (c == '=') return 0;
    return char_to_base64(c);
}

// Number of bytes encoded by a quartet: 3, or fewer if there is padding.
int num_bytes(char c3, char c4) {
    if (c3 == '=') return 1;  // "=="
    if (c4 == '=') return 2;  // "="
    return 3;
}

// Prints the bytes (each preceded by a space) encoded by one quartet.
void decode_quartet(char c1, char c2, char c3, char c4) {
    int x = ((digit(c1) * 64 + digit(c2)) * 64 + digit(c3)) * 64 + digit(c4);

    // Digits in base 256, extracted from the end (B3 first)
    int b3 = x % 256;
    x /= 256;
    int b2 = x % 256;
    int b1 = x / 256;

    int n = num_bytes(c3, c4);
    cout << ' ' << b1;
    if (n >= 2) cout << ' ' << b2;
    if (n >= 3) cout << ' ' << b3;
}

int main() {
    char c1;
    while (cin >> c1) {            // first char of a case
        while (c1 != '.') {        // each iteration = one quartet
            char c2, c3, c4;
            cin >> c2 >> c3 >> c4;
            decode_quartet(c1, c2, c3, c4);
            cin >> c1;             // start of next quartet, or '.'
        }
        cout << endl;
    }
}