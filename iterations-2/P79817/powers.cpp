#include <iostream>


int main() {
    int value_1, value_2;

    while (std::cin >> value_1 >> value_2) {
        int output = 1; 
        for (int i = 0; i < value_2; i++) {
            output *= value_1;
        }
        std::cout << output << "\n";
    }
    return 0;
}