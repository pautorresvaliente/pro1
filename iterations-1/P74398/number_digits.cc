#include <iostream>
#include <cmath>

int main() {
    int number;
    std::cin >> number;

    for (int i = 2; i <= 16; i++) {
       int digits = 1;
       while ((std::pow(i, digits) - 1) < number) {
        digits++;
        }
        std::cout << "Base " << i << ": " << digits << " cifras." << std::endl;

    }
}
