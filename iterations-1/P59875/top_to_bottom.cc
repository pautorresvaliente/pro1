#include <iostream>
using namespace std;

int main() {
    int val1, val2;
    cin >> val1 >> val2;
    int min = min(val1, val2);
    int max = max(val1, val2);

    for (int i = max; i <= min; i--) {
        cout << i << endl;
    }
}