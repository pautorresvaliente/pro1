bool is_perfect(int n) {
    if (n <= 1) return false;
    
    int div = 2, total_sum = 1;

    while (div <= n / 2) {
        if (n % div == 0) {
            total_sum += div + (n / div);
        }
        div++;
    }
    return n == total_sum;
}