#include <iostream>
#include <string>

int main() {
    int x = 0, y = 0;
    std::string input;
    std::cin >> input;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == 'n') y--;
        else if (input[i] == 's') y++;
        else if (input[i] == 'e') x++;
        else if (input[i] == 'w') x--; 
    }
    std::cout << "(" << x << ", " << y << ")\n";
    return 0;
}