#include <iostream>
using namespace std;


int main() {
    int n, num, output;
    cin >> n;
    int pos = 1;
    while (cin >> num) {
        if (pos == n) {
            output = num;
        }
        pos++;
    }
    cout << "At the position " << n << " there is a(n) " << output << "." << endl;
    return 0;
}