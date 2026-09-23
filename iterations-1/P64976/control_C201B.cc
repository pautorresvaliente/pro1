#include <iostream>


int main() {
    int n;

    if (!(std::cin >> n)) {
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        std::cout << n << " x " << i << " = " << n * i << std::endl;
    }
    return 0;
}