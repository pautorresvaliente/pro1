#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    double sum = 0, squares = 0, x;

    for (int i = 0; i < n; i++) {
        cin >> x;
        sum += x;
        squares += x * x;
    }

    double result = squares / (n - 1)
                  - sum * sum / (n * (n - 1.0));

    cout << fixed << setprecision(2) << result << endl;
}