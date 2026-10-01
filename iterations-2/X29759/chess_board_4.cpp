#include <iostream>
#include <string>


int main() {
    int size;

    if (!(std::cin >> size)) return 0;
    
    int total_white_sum = 0, total_black_sum = 0;
    bool is_white_square = true;
    for (int i = 0; i < size; i++) {
        int copy_is_white_square = is_white_square;

        std::string row_str;
        std::cin >> row_str;
        
        for (int j = 0; j < size; j++) {
            total_white_sum += copy_is_white_square ? row_str[j] - '0': 0;
            total_black_sum += copy_is_white_square ? 0 : row_str[j] - '0';
            copy_is_white_square = !copy_is_white_square;
        }
        is_white_square = !is_white_square;
    }
    
    std::cout << total_white_sum << "-" << total_black_sum << " = " << total_white_sum - total_black_sum << std::endl;
    return 0;
}