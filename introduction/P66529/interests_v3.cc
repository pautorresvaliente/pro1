#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);

    double i;
    string periode;
    cin >> i >> periode;

    int n;
    if (periode == "setmanal") n = 52;
    else if (periode == "mensual") n = 12;
    else if (periode == "trimestral") n = 4;
    else n = 2; // semestral

    double tae = 100.0 * (pow(1.0 + (i / 100.0) / n, n) - 1.0);

    cout << tae << endl;

    return 0;
}