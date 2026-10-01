#include <iostream>


int main() {
    int size_triangle;

    if (!(std::cin >> size_triangle)) {
        return 0;
    }

    for (int i = 1; i <= size_triangle; i++) {
        // char symbol = '*';
        // std::cout << symbol * i << "\n";
        for (int j = 0; j < i; j++) {
            std::cout << '*';
        }
        std::cout << std::endl;
    }
    return 0;
}