#include <iostream>
using namespace std;

int main() {
    int n, x;
    int i = 0;
    cin >> n;
    while (cin >> x) {
        i++;
        if (i == n) {
            cout << "At the position " << n << " there is a(n) " << x << "." << endl;
            return 0;
        }
    }
    cout << "Incorrect position." << endl;
    return 0;
}