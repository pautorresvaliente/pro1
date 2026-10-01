#include <iostream>


int main() {
    int n;
    if (!(std::cin >> n)) return 0;
    // for (int i = 0; i < n; i++) {
    //     for (int j = n - 1; j > 0; --j) {
    //         for (int k = 0; k < j; k++) {
    //             std::cout << '+';
    //         }
    //     }
    //     std::cout << '/';
    //     for (int l = 0; l < n - j; l++) {
    //         std::cout << '*';
    //     }
    //     std::cout << "\n";
    // }
    int lines = 0;
    int sums = n - 1;
    int mult = 0;
    while (lines < n) {
        for (int i = 0; i < sums; i++) {
            std::cout << '+';
        }
        std::cout << '/';
        for (int i = 0; i < mult; i++) {
            std::cout << '*';
        }
        std::cout << "\n";
        lines++;
        sums--;
        mult++;
    }
    return 0;
}