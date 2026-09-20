#include <iostream>
// #include <cmath>
using namespace std;

int main() {
    int val1, val2;
    cin >> val1 >> val2;
    int min = std::min(val1, val2);
    int max = std::max(val1, val2);

    for (int i = max; i >= min; i--) {
        cout << i << endl;
    }
}