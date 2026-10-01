#include <iostream>
#include <string>

int main() {
    int rows, columns;

    if (!(std::cin >> rows >> columns)) return 0;
    
    int total_sum = 0;
    for (int i = 0; i < rows; i++) {
        std::string row_str;
        std::cin >> row_str;
        
        for (int j = 0; j < columns; j++) {
            total_sum += row_str[j] - '0';  
        }
    }
    
    std::cout << total_sum << std::endl;
    return 0;
}