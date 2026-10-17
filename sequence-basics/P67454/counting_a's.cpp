#include <iostream>
using namespace std;

int main() {
    char sequence;
    cin >> sequence;

    int i = 0, counter_of_a = 0;
    while (sequence != '.') {
        if (sequence == 'a'){
            ++counter_of_a;
        }
        ++i;
        cin >> sequence;
    }
    cout << counter_of_a << endl;
    return 0;
}
