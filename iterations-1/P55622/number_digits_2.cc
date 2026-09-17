#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int temp = n;
    int digits = 0;
    do {
        digits++;
        temp /= 10;
    } while (temp != temp / 10 )

    std::cout << "The number of digits of " << n << " is " << digits << "." << std::endl;
}