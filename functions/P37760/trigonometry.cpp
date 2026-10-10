#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(6);

    double degrees;

    while (cin >> degrees) {
        double radians = degrees * (M_PI / 180);
        cout << sin(radians) << " " << cos(radians) << endl;
   }
   return 0;
}