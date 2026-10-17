#include <cmath>


int nzeros_fact(int x) {
    int count = 0;

    while (x >= 5) {
        count += x / 5;
        x /= 5;
    }
    return count;
}