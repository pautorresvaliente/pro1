#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    
    double c = 1000;
    int a = 1000;
    double i;
    string timeI;
    double tae;
    int n;

    cin >> i >> timeI;

    if (timeI == "setmanal") {
        n = 52;
    } else if (timeI == "mensual") {
        n = 12;
    } else if (timeI == "trimestral") {
        n = 3;
    } else if (timeI == "semestral") {
        n = 2;
    }
    double interest = (i / 100) / n;

    for (int j = 0; j < n; j++) {
        c += c * interest;
    }

    tae = 100 * (c - a) / a;
    cout << tae << endl; 

    return 0;
}