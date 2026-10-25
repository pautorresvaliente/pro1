#include <iostream>
using namespace std;


int main() {
    int n, consecutiveCards = 0;
    char prev = '\0', cards;

    cin >> n;

    while (cin >> cards) {
        if (cards == prev) {
            consecutiveCards++;
        } else {
            prev = cards;
            consecutiveCards = 1;
        }

        if (n == consecutiveCards) {
            cout << n << "-Poker of " << prev << "!" << endl;
            return 0;
        }
    }
    cout << "No " << n << "-Poker" << endl;
    return 0;
}