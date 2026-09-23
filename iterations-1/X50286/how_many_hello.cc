#include <iostream>
#include <string>


int main() {
    std::string input;

    if (!std::getline(std::cin, input)) {
        return 0;
    }
    // if (input.length() < 5) {
    //         std::cout << 0 << std::endl;
    //         return 0;
    // }
    // int size = sizeof(input) / sizeof(input[0]);
    int output = 0;
    // std::cout << input.length() << std::endl;

    for (int i = 0; i + 4 < input.length(); i++) {
        // std::cout << i << " - " << input[i] << std::endl; 
        if ((input[i] == 'h') && (input[i + 1] == 'e') && (input[i + 2] == 'l') && (input[i + 3] == 'l') && (input[i + 4] == 'o')) {
            output++;
        }
    }

    std::cout << output << std::endl;
}