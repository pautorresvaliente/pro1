#include <iostream>
#include <iomanip> // Required for std::setprecision and std::fixed

int main() {
    int n;
    double output = 0;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        output += 1.0 / i;
    }
    std::cout << std::fixed << std::setprecision(4)  << output << std::endl;
}