#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(10);

    int n, m;
    while (cin >> n >> m) {
        double result = 0.0;
        
        // Only calculate the non-overlapping terms
        for (int i = m + 1; i <= n; i++) {
            result += 1.0 / i;
        }
        
        cout << result << endl;
    }
    return 0;
}