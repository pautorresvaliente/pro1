#include <iostream>
using namespace std;

int main() {
    int val1, val2, val3, A, B, C;
    string order;

    cin >> val1 >> val2 >> val3;
    cin >> order;

    A = min(min(val1, val2), min(val1, val3));
    C = max(max(val1, val2), max(val1, val3));
    if (val1 != A && val1 != C) B = val1;
    else if (val2 != A && val2 != C) B = val2;
    else B = val3;

    for (int i = 0; i < 3; i++) {
        if (order[i] == 'A') cout << A << " ";
        else if (order[i] == 'B') cout << B << " ";
        else cout << C << " ";
    }
    cout << endl;
}
