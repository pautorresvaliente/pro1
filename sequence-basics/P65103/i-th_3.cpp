#include <iostream>
using namespace std;

int main() {
    int n, x;
    int i = 1;
    while (cin >> x && i < n) {
        i++;
    }
    if (i == n) {
        cout << "At the position " << n << " there is a(n) " << x << "." << endl;
    } else {
        cout << "Incorrect position." << endl;
    }
    return 0;
}