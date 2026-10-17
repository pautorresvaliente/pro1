#include <iostream>
#include <string>
using namespace std;


int main() {
    int n;
    while (cin >> n) {
        string first_nums = "", last_nums = "";

        for (int i = 1; i * i <= n; i++) { // edge case i * i <= n
        if (n % i == 0) {
                first_nums += " " + to_string(i);
                if (i * i < n) {
                    last_nums = to_string(n / i) + (last_nums != "" ? " " : "") + last_nums;
                }
            }
        }
        cout << "divisors of " << n << ":" << first_nums << (last_nums != "" ? " " : "") << last_nums << endl; 
    }
     return 0;
}
