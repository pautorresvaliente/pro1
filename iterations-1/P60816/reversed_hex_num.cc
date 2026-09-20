#include <iostream>
#include <string>


int main() {
    int n;
    if (!(std::cin >> n)) {
        std::cout << "0" << std::endl;
        return 0;
    }
    if (n == 0) {
        std::cout << "0" << std::endl;
        return 0;
    }
    std::string output = "";
    while (n != 0) {
        // output += std::to_string(n % 16);
        int remainder = n % 16;
        // switch (remainder) {
        //     case 10:
        //         output += "A"; 
        //         break;
        //     case 11:
        //         output += "B"; 
        //         break;
        //     case 12:
        //         output += "C"; 
        //         break;
        //     case 13:
        //         output += "D"; 
        //         break;
        //     case 14:
        //         output += "E"; 
        //         break;
        //     case 15:
        //         output += "F"; 
        //         break;
        //     default:
        //         output += std::to_string(remainder);
        //         break;
        // }
        std::string values = "0123456789ABCDEF";
        output += values[remainder];
        n = n / 16;
    }

    std::cout << output << std::endl;
}