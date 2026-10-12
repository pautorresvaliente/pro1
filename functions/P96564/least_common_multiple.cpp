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


int main() {
    int n;
    while (std::cin >> n && n != 0) {
        long long lcm = 1;
        int x;
        for (int i = 0; i < n; ++i) {
            std::cin >> x;
            lcm = (lcm * x) / gcd(lcm, x);
        }
        std::cout << lcm << std::endl;
    }
    return 0;
}