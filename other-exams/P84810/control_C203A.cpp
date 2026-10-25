#include <iostream>
using namespace std;

// Pre: nombre natural
// Post: torna true si n és un nombre primer
bool es_primer(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}


int main() {
    int n, totalConsecutivePrimes = 0;
    bool isPrevPrime = false;


    while (cin >> n) {
        if (es_primer(n)) {
            if (isPrevPrime) {
                totalConsecutivePrimes++;
            } else {
                isPrevPrime = true;
            }
        } else {
            isPrevPrime = false;
        }
    }
    cout << "parells de nombres primers consecutius: " << totalConsecutivePrimes << endl;
    return 0;
}