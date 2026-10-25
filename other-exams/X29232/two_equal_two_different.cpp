#include <iostream>
using namespace std;

bool xor_gate(bool a, bool b) {
    return (a and not b) or (not a and b);
}

bool equal(int x, int y) {
    return x == y;
}

bool different(int x, int y) {
    return x != y;
}

int main() {
    int a, b, c, d;
    bool condition = false;

    cin >> a >> b >> c >> d;

    if (equal(a, b)) {
        if (different(c, d))
    }
    return 0;
}