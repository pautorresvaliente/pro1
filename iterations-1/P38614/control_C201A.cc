#include <iostream>
#include <string>


int main() {
    std::string num;
    if (!(std::cin >> num)) {
        return 0;
    }
    int sum = 0;
    for (int i = num.length() - 1; i >= 0; i -= 2) {
        sum += num[i] - '0';
    }
    std::cout << num << " IS " << (sum % 2 == 0 ? "COOL" : "NOT COOL") << std::endl;
    return 0;
}