#include <iostream>
using namespace std;

int main() {
    int n, m;
    bool sixSeven = false;
    while (cin >> n >> m) {
        if (sixSeven) {
            cout << endl;
        }
        sixSeven = true;
        int chooseNumber = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << 9 - (chooseNumber % 10);
                chooseNumber++;
            }
            cout << endl; // Move to the next row
        }
    }
    return 0;
}