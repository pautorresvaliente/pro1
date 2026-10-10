#include <iostream>
#include <cmath>

using namespace std;


int main() {
    cout.setf(ios::fixed);
    cout.precision(4);

    double a, b, c;

    cin >> a >> b >> c;

    double sqrtT = b*b - 4*a*c;

    if (sqrtT < 0) {
        cout << "sense solucio" << endl;
        return 0;
    }
    double ans1 = (-b + sqrt(sqrtT)) / (2*a);
    double ans2 = (-b - sqrt(sqrtT)) / (2*a);

    if (ans1 < ans2) {
        cout << ans1 << " " << ans2 << endl;
    } if (ans1 == ans2) {
        cout << ans1 << endl;
    } else {
        cout << ans2 << " " << ans1 << endl;
    }
    return 0;
}