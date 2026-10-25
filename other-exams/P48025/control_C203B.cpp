#include <iostream>
using namespace std;


bool acaba_en_quaranta_dos(int x) {
    if (x < 42) {
        return false;
    }
    return x % 100 == 42;
}


int main() {
    int n, x, counter, pinter = 1;

    while (cin >> n) {
        counter = 0;
        for (int i = 0; i < n; i++) {
            cin >> x;
            if (acaba_en_quaranta_dos(x)) {
                counter++;
            }
        }
        cout << "#" << pinter++ << ": " << counter << endl;
    }
    return 0;
}