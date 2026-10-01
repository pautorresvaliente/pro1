#include <iostream>
#include <string>


int main() {
    int n, m;
    bool first = true;
    while (std::cin >> n >> m) {
        
        // Add space between rectangles
        if (first) {
            first = !first;
        } else {
            std::cout << std::endl;
        }

        int value = (n + m) % 5;
        
        for (int i = 0; i < n; i++) {
            std::string row = "";
            for (int j = 0; j < m; j++) {
                row += char(value+ '0');
            }
            std::cout << row << std::endl;
        }
    }
    return 0;
}