#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    // Set output format to 6 decimal places fixed
    for (int i = 0; i < n; i++) {
        string type;
        cin >> type;
        
        double output = 0.0;
        if (type == "rectangle") {
            double length, width;
            cin >> length >> width;
            output = length * width;
        } else if (type == "circle") {
            double radius;
            cin >> radius;
            output = M_PI * radius * radius;
        }

        cout << fixed << setprecision(6) << output << endl;
    }

    return 0;
}