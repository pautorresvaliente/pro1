bool is_balanced(int n) {
    bool is_odd = true;
    int counter = 0;
    while (n != 0) {
        if (is_odd) {
            counter += n % 10;
        } else {
            counter -= n % 10;
        }
        n /= 10;
        is_odd = !is_odd;
    }
    return (counter == 0);
}