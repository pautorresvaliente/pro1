#include <iostream>
#include <algorithm>


int main() {
    int a, b;
    std::cin >> a >> b;
    int min = std::min(a, b);
    int max = std::max(a, b);
    int remainder;
    do {
        remainder = max % min;
        max = min;
        min = remainder;
    } while (remainder != 0);

    std::cout << "The gcd of "  << a << " and " << b << " is " << max << "." << std::endl;
}