#include <iostream>
using namespace std;


bool is_powerful(int n) {
    for (int j = 2; j * j <= n; j++) {
        if (n % j == 0) {
            if ((n / j) % j != 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n;

    while (cin >> n) {
        cout << "1";
        for (int i = 2; i <= n; i++) {

            
            if (is_powerful(i)) {
                cout << ", " << i;
            }
        }
        cout << endl;
    }
}