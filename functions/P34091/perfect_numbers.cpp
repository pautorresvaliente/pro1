#include <cmath>


bool is_perfect(int n) {
    if (n <= 1) return false;
    
    // int div = 2, total_sum = 1;

    // while (div <= n / 2) {
    //     if (n % div == 0) {
    //         total_sum += div + (n / div);
    //     }
    //     div++;
    // }
    // return n == total_sum;
    int total_sum = 1;
    for (int i = 2; i < sqrt(n); ++i) { // sqrt(n)
        if (n % i == 0) {
            total_sum += i + (n / i);
            
        }
    }
    return n == total_sum;
}