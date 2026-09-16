#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    
    double i;
    string t;
    int n;

    cin >> i >> t;

    if (t == "setmanal") {
        n = 52;
    } else if (t == "mensual") {
        n = 12;
    } else if (t == "trimestral") {
        n = 3;
    } else if (t == "semestral") {
        n = 2;
    }
    cout << 100 * (pow(1 + i / (100 * n), n) - 1) << endl; 
}