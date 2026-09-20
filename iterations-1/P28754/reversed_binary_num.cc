#include <iostream>
#include <algorithm>
#include <string>

int main() {
    int n;
    std::cin >> n;
    if (!n) {
        std::cout << "0" << std::endl;
        return 0;
    }
    std::string output = "";

    while (n != 0) {
        int r = n % 2;
        output += std::to_string(r);
        n = n / 2;
    }
    std::cout << output << std::endl;
}