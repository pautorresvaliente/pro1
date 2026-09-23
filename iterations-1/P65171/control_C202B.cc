#include <iostream>


int main() {
    std::cout.setf(std::ios::fixed);
    std::cout.precision(2); 
    
    int n;
    double x;
    double outputX = 0.0;
    double outputY = 0.0;
    for (int i = 0; i <= n; i++) {
        std::cin >> x;
        outputX += 0.5 * x * x;
        outputY += x;
    }
    double output = outputX - ((1.0 / (n * (n - 1.0))) * outputY * outputY);
    std::cout << outputX << " - " << outputY << std::endl;
    std::cout << output << std::endl;
    return 0;
}