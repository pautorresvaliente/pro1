#include <iostream>

int main() {
    int number;
    cin >> number;

    for (int i = 2; i <= 16; i++) {
        /*
        int digits = 0;
        while (number >= i) {
            digits++;
            number /= i;
        }
        */
       int digits = 1;
       while (pow(i, digits) - 1 < number) {
        digits++;
        }
        cout << "Base " << i << ": " << digits << " cifras" << endl;

    }
}