#include <iostream>
#include <cmath>

using namespace std;


int main() {
    cout.setf(ios::fixed);
    cout.precision(4);

    double a, b, c;

    cin >> a >> b >> c;

    double sqrtT = sqrt(b*b - 4*a*c);

    if (!sqrtT) {
        cout << "sense solucio" << endl;
        return 0;
    }
    double ans1 = (b + sqrtT) / 2*a;
    double ans2 = (b - sqrtT) / 2*a;

    if (ans1 < ans2) {
        cout << ans1 << " " << ans2 << endl;
    } else {
        cout << ans2 << " " << ans1 << endl;
    }
}