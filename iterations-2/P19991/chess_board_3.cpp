#include <iostream>
#include <string>

int main() {
    int size;

    if (!(std::cin >> size)) return 0;
    
    int total_sum = 0;
    for (int i = 0; i < size; i++) {
        std::string row_str;
        std::cin >> row_str;
        
        // for (int j = 0; j < size; j++) {
        //     total_sum += row_str[j] - '0';
        // }
        total_sum += row_str[i] - '0';
        if (i != (size - i - 1)) {
            total_sum += row_str[size - i - 1] - '0';
        }
    }
    std::cout << total_sum << std::endl;
    return 0;
}