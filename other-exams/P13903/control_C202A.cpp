#include <iostream>


int main() {
    int number;
    bool outer_white = true, inner_white;
    std::cin >> number;

    for (int i = 0; i < number; i++) {
        inner_white = outer_white;
        for (int j = 0; j < number; j++) {
            if (inner_white) {
                std::cout << '.';
            } else {
                std::cout << '*';
            }
            inner_white = !inner_white;
        }
        outer_white = !outer_white;
        std::cout << std::endl;
    }
    return 0;
}