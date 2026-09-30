#include <iostream>
#include <string>


int main() {
    std::cout.setf(std::ios::fixed);
    std::cout.precision(4);

    double exchange_value;
    if (!(std::cin >> exchange_value)) {
        return 0;
    }

    double value, eur_sum = 0, usd_sum = 0;
    std::string currency;

    while (std::cin >> value >> currency) {
        eur_sum += (currency == "EUR") ? value : (value / exchange_value);
        usd_sum += (currency == "USD") ? value : value * exchange_value;
    }
    std::cout << eur_sum << " " << usd_sum << std::endl;
    return 0;
}  