#include <iostream>
#include <string>

using namespace std;


int main() {
    int num, index = 1, lastValidIndex = -1;
    string word, prev;

    while (cin >> num) {
        bool valid = true;

        if (num <= 1) {
            cout << "The last line in increasing order is " << index << ".\n";
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
            lastValidIndex = index;
        }
        index++;
    }

    if (lastValidIndex != -1) {
        cout << "The last line in increasing order is " << lastValidIndex << ".\n";
    } else {
        cout << "There is no line in increasing order.\n";
    }
    return 0;
}