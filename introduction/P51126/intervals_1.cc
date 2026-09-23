#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a1, b1, a2, b2;

    cin >> a1 >> b1 >> a2 >> b2;

    int output1 = max(a1, a2);
    int output2 = min(b1, b2); 

    if (output2 < output1) {
        cout << "[]" << endl;
        return 0;
    }
    cout << "[" << output1 << "," << output2 << "]" << endl;
}
