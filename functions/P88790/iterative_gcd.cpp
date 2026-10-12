#include <iostream>


int gcd(int a, int b) {
    int max = a;
    int min = b;
    if (max < b) {
        max = b;
        min = a;
    }
    if (min == 0) return max;

    while (max % min != 0) {
        int temp = max;
        max = min;
        min = temp % min;
    }
    return min;
}

// int main() {
//     int a, b;
//     while (std::cin >> a >> b) {
//         std::cout << gcd(a, b) << std::endl;
//     }
//     return 0;
// }