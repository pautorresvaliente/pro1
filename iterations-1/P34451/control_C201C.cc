#include <iostream>

int main() {
    int x;
    std::cin >> x;

    int n;
    int output = 0;

    while (std::cin >> n) {
        if (n % x == 0) {
            output++;
        }
    }

    std::cout << output << '\n';
}