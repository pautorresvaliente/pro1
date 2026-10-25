#include <iostream>
#include <string>

using namespace std;


int main() {
    int num, index = 1;
    string word, prev;

    while (cin >> num) {
        bool valid = true;

        if (num <= 1) {
            cout << "The first line in increasing order is " << index << ".\n";
            return 0;
        }
        cin >> prev;
        for (int i = 1; i < num; i++) {
            cin >> word;

            if (prev > word) {
                valid = false;
            }
            prev = word;
        }

        if (valid) {
            cout << "The first line in increasing order is " << index << ".\n";
            return 0;
        }
        index++;
    }
    cout << "There is no line in increasing order.\n";
    return 0;
}