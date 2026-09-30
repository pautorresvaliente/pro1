#include <iostream>


int main() {
    int n;
    while (std::cin >> n) {

        
        int p = n / 7;
        while ((n - 7 * p) % 4 != 0) {
            p--;
        }
        int q = (n - 7 * p) / 4;
        std::cout << p << " " << q << std::endl;
    }
    return 0;
}