#include <iostream>
using namespace std;


int main() {
    int num;

    while (cin >> num && num > 100) {

        int d = 1, peaks = 0;

        while (num > 0) {
            int c = (num / d) % 10;
            num/= 10;
            int b = (num / d) % 10;
            num/= 10;
            int a = (num / d) % 10;
            if (a * b * c <= 0) {
                break;
            }
            if (b > a && b > c) peaks++;

            num /= 10;
        }
        
        cout << peaks << endl;
    }
    return 0;
}