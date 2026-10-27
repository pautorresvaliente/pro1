#include <iostream>
using namespace std;


int main() {
    int a, b, c;

    while (cin >> a >> b >> c) {
        int middle = a;

        if ((b < a && b > c) || (b < c && b > a)) {
            middle = b;
        }
        if ((c < a && c > b) || (c < b && c > a)) {
            middle = c;
        }
        cout << middle << endl;
    }
    return 0;
}