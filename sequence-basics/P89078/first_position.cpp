#include <iostream>
using namespace std;


int main() {
    int x, i = 0;
    bool findEven = false;
    while (cin >> x and not findEven) {
        if (x % 2 == 0) {
            findEven = true;
        }
        i++;
    }
    cout << i << endl;
    return 0;
}