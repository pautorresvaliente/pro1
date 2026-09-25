#include <iostream>
#include <string>


int main() {
    std::string number;

    if (!(std::cin >> number)) {
        return 0;
    }

    std::string number_suffix = (number.length() >= 3) ? number.substr(number.length() - 3) : number;

    std::string x;
    int counter = 0;
    std::cout << "nombres que acaben igual que " << number << ":\n";

    while (std::cin >> x) {
        std::string x_suffix = (x.length() >= 3) ? x.substr(x.length() - 3) : x;

        if (number_suffix == x_suffix) {
            counter++;
            std::cout << x << "\n";
        }
    }
    std::cout << "total: " << counter << "\n";
    return 0;
}