#include <iostream>
using namespace std;

int main() {
    int val1, val2, val3;
    bool is_equal_to_avg_other_two = false;

    if (cin >> val1 >> val2 >> val3) {
        if ((val1 + val2 == 2 * val3) or (val1 + val3 == 2 * val2) or (val2 + val3 == 2 * val1)) {
            is_equal_to_avg_other_two = true;
        }

        if (is_equal_to_avg_other_two) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}