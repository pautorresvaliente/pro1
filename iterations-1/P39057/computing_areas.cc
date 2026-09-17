#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string type;
        cin >> type;
        double output;
        if (type == "rectangle") {
            int length, width;
            cin >> length >> width;

            output = length * width;
        } else {
            int radius;
            cin >> radius;

            output = M_PI * pow(radius, 2);
        }
        cout << fixed() << setprecision(6) << output << endl;
    }
}