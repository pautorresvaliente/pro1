#include <iostream>


int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}


int main() {
    int num, i = 1;

    if (!(std::cin >> num)) {
        std::cout << "nothing" << std::endl;
        return 0;
    }

    int temp = num;
    while (temp >= 10) {
        temp /= 10;
        i++;
    }

    // Even number of digits
    if (i % 2 == 1) {
        std::cout << "nothing" << std::endl;
        return 0;
    }

    int divisor = 1;

    for (int j = 0; j < i / 2; j++) {
        divisor *= 10;
    }
    int half1 = num / divisor;
    int half2 = num % divisor;

    int sumHalf1 = sumOfDigits(half1);
    int sumHalf2 = sumOfDigits(half2);

    // Calculating comparisons
    if (sumHalf1 == sumHalf2) {
        std::cout << sumHalf1 << " = " << sumHalf2 << std::endl;
    } else if (sumHalf1 < sumHalf2) {
        std::cout << sumHalf1 << " < " << sumHalf2 << std::endl;
    } else {
        std::cout << sumHalf1 << " > " << sumHalf2 << std::endl;
    }
    return 0;
}