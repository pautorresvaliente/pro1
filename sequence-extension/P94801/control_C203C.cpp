#include <iostream>
using namespace std;

bool es_triangle_rectangle(int a, int b, int c) {
    return ((a * a == b * b + c * c) || (a * a + b * b == c * c) || (b * b == a * a + c * c));
}


int main() {
    int a, b, c, total = 0;

    cin >> a >> b;

    while (cin >> c) {
        if (es_triangle_rectangle(a, b, c)) {
            total++;
        }
        a = b;
        b = c;
    }

    cout << total << endl;
}