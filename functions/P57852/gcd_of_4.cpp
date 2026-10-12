int gcd(int a, int b) {
    int max = a;
    int min = b;
    if (max < b) {
        max = b;
        min = a;
    }
    if (min == 0) return max;

    while (max % min != 0) {
        int temp = max;
        max = min;
        min = temp % min;
    }
    return min;
}


int gcd4(int a, int b, int c, int d) {
    return gcd(gcd(a, b), gcd(c, d));
};