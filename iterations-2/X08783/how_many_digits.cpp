#include <iostream>
#include <cmath>


int main() {
    int b, n;

    while (std::cin >> b >> n) {
        // std::cout << n / b + n % b << "\n";
        int output = 1;
        while (std::pow(b, output) - 1 < n) {
            output++;
        }
        std::cout << output << std::endl;
    }
    return 0;
}