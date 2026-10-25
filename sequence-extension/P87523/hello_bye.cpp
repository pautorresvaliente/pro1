#include <iostream>
using namespace std;


int main() {
    char letter;
    int acc = 0;

    while (cin >> letter && letter != '.') {
        // if (acc == 4 && letter == 'o') {
        //     cout << "hello\n";
        // } else if ((acc == 2 || acc == 3) && letter == 'l') {
        //     acc++;
        // } else if (acc == 1 && letter == 'e') {
        //     acc++
        // } else if (acc)

        if (letter == 'h') {
            acc = 1;
        } else if ((acc == 1  && letter == 'e') || ((acc == 2 || acc == 3)  && letter == 'l') || (acc == 4 && letter == 'o')) {
            acc++;
        } else {
            acc = 0;
        }

        if (acc == 5) {
            cout << "hello\n";
            return 0;
        }
    }

    cout << "bye\n";
    return 0;
}