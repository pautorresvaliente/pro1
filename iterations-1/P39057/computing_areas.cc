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

        if (type == "rectangle") {
            int length, width;
            cin >> length >> width;

            cout << length * width << endl;
        } else {
            int radius;
            cin >> radius;

            cout << M_PI * pow(radius, 2) << endl;
        }
    }
}