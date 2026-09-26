#include <iostream>


int main() {
    int d, n, t, a;

    if (!(std::cin >> d >> n >> t)) {
        return 0;
    }
    int weeklyPositiveBalance = 0;
    for (int i = 0; i < t; i++) {
        if (!(std::cin >> a)) {
            continue;
        }
        n = n - d + a;
        if (n > 0) {
            weeklyPositiveBalance++;
        }
    }
    std::cout << weeklyPositiveBalance << "\n";
    return 0;
}