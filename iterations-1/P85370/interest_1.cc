#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    
    double c, i;
    int t;
    string type;

    if (!(cin >> c >> i >> t >> type)) {
        return 0;   
    }
    double output = c;

    for (int j = 0; j < t; j++) {
            output += (type == "simple" ? c : output) * (i / 100.0);
        }
    
    cout << output << "\n";
    return 0;
}