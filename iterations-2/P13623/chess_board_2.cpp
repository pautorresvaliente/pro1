#include <iostream>
#include <string>

int main() {
    int rows, columns;

    if (!(std::cin >> rows >> columns)) return 0;
    
    int total_sum = 0;
    bool is_white_square = true;
    for (int i = 0; i < rows; i++) {
        int copy_is_white_square = is_white_square;

        std::string row_str;
        std::cin >> row_str;
        
        for (int j = 0; j < columns; j++) {
            total_sum += copy_is_white_square ? row_str[j] - '0': 0;
            copy_is_white_square = !copy_is_white_square;

        }
        is_white_square = !is_white_square;
    }
    
    std::cout << total_sum << std::endl;
    return 0;
}