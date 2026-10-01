#include <iostream>


int main() {
    int base, number;

    if (!(std::cin >> base)) {
        return 0;
    }

    while (std::cin >> number) {
        int final_sum = 0;
        int temp = number;

        while (temp != 0) {
            final_sum += temp % base;
            temp /= base;
        }
        std::cout << number << ": " << final_sum << "\n";
    }
    return 0;
}