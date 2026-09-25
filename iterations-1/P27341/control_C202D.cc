#include <iostream>
#include <cmath>

int main() {
    int value_1, value_2;
    while (std::cin >> value_1 >> value_2) {
        int total_sum = 0;
        for (int i = value_1; i <= value_2; i++) {
            total_sum += pow(i, 3);
        }
    std::cout << "suma dels cubs entre " << value_1 << " i " << value_2 << ": " << total_sum << std::endl;   
    };
}
