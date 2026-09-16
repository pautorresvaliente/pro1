#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a1, b1, a2, b2;

    cin >> a1 >> b1 >> a2 >> b2;

    if (a1 == a2 && b1 == b2) {
        cout << '=' << " , " << "[" << a1 << "," << b2 << "]" << endl;
    } 
    else if (a1 >= a2 && b1 <= b2) {
        cout << '1' << " , " << "[" << max(a1, a2) << "," << min(b1, b2) << "]" << endl;
    } 
    else if (a1 <= a2 && b1 >= b2) {
        cout << '2' << " , " << "[" << max(a1, a2) << "," << min(b1, b2) << "]" << endl;
    } 
    else {
        if (b1 < a2 || b2 < a1) {
            cout << "? , []" << endl;
        } 
        else {
            cout << '?' << " , " << "[" << max(a1, a2) << "," << min(b1, b2) << "]" << endl;
        }
    }

    return 0;
}