#include <iostream>
#include <string>


int main() {
    int n;
    if(!(std::cin >> n)) {
        std::cout << "0" << std::endl;
        return 0;
    }
    if (n == 0) {
        std::cout << "0" << std::endl;
        return 0;
    }
    std::string output = "";

    while (n != 0) {
        output += std::to_string(n % 10);
        n = n / 10;
    }
    std::cout << output << std::endl;
}