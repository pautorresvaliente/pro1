bool c_frac(int n1, int d1, int n2, int d2) {
    double frac_1 = n1 * 1.0 / d1;
    double frac_2 = n2 * 1.0 / d2;
    return (frac_1 < frac_2);
}