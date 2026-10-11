int number_of_digits(int n) {
    int digits = 1;
    int d = 10;
    while (d <= n) {
        digits++;
        d *= 10;
    }
    return digits;
}

int main() {
    return 0;
}