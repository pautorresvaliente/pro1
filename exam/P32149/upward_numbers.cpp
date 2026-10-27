#include <iostream>
using namespace std;

int main() {
    double x, prev;
    bool condition = true;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> prev;
        if (prev != -1) {
            while (cin >> x && x != -1) {
            if (prev > x) {
                condition = false;
                }
            }
            prev = x;
        }
    }

    if (condition) {
        cout << "Si\n";
    } else {
        cout << "No\n";
    }
    return 0;
}