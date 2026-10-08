#include <iostream>

using namespace std;


int main() {
    int n;

    while (cin >> n) {
        do {
            int temp = n;
            int output = 1;
            if (temp == 0) {
                output = 0;
            } else {
                while (temp != 0) {
                output *= temp % 10;
                temp /= 10;
                }
            }
            cout << "The product of the digits of " << n << " is " << output << "." << endl;
            n = output;
        } while (n >= 10);
        cout << "----------" << endl;
    }
    return 0;
}