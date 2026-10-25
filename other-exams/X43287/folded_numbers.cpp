#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int temp = n;
        int num_digits = 0;
        
        // 1. Count total digits
        while (temp > 0) {
            num_digits++;
            temp /= 10;
        }
        
        // // Edge case: single digit numbers fold into themselves
        // if (num_digits <= 1) {
        //     cout << n << " -> " << n << endl;
        //     continue;
        // }

        // 2. Calculate the divisor to split the number
        // Example: For 12345 (5 digits), b gets 2 digits. Divisor = 100.
        int b_digits = num_digits / 2;
        int divisor = 1;
        for (int i = 0; i < b_digits; i++) {
            divisor *= 10;
        }

        // 3. Split into a and b
        int b = n % divisor;
        int a = n / divisor;

        // 4. Reverse a mathematically
        int a_inv = 0;
        while (a > 0) {
            a_inv = (a_inv * 10) + (a % 10);
            a /= 10;
        }

        // 5. Output the result
        cout << n << " -> " << a_inv + b << endl;
    }
    return 0;
}