#include <iostream>
#include <string>
using namespace std;


int main() {
    int k, n, m;
    bool first = true;


    if (cin >> k >> n >> m) {
        for (int i = 0; i < k; i++) {
            
            if (!first) {
                cout << endl;
            } else {
                first = false;
            }
            int num = 9;
            for (int j = 0; j < n; j++) {
                string row = "";

                for (int l = 0; l < m; l++) {
                    row += num + '0';
                    num--;

                    if (num < 0) num += 10;
                }
                
                cout << row << endl;
            }
        }
    }
}