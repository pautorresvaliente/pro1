#include <iostream>
using namespace std;


int main() {
    cout.setf(ios::fixed);
    cout.precision(4);

    double x;
    double c;
    cin >> x;
    double output = 0;
    double power = 1;
    while (cin >> c) {
        output += c * power;
        power *= x;
    }
    cout << output << endl;
    return 0;
}
