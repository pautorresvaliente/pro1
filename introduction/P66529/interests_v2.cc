#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    
    double i;
    string t;
    int n;

    if (cin >> i >> t) {
        if (t == "setmanal") {
        n = 52;
        } else if (t == "mensual") {
            n = 12;
        } else if (t == "trimestral") {
            n = 3;
        } else if (t == "semestral") {
            n = 2;
        }
        
        double tae = 100.0 * (pow(1.0 + (i / 100.0) / n, n) - 1.0);
        cout << tae << endl; 
    }
    return 0;
}