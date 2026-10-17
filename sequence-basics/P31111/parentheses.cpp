#include <iostream>
using namespace std;


int main() {
    int counter = 0;
    char sequence;
    bool negative = false;

    while (cin >> sequence) {
        if (sequence == '(') {
            counter++;
        }
        else {
            counter--;
            if (counter < 0) negative = true;
        }
    }
    cout << (counter == 0  && !negative ? "yes" : "no") << endl;
    return 0;
}