#include <iostream>
using namespace std;

/**
* @pre n >= 0
* @post returns true if n is bicolor, false otherwise
*/
bool is_bicolor(int n) {
    int numberCounter = 0, num1, num2;
    while (n != 0) {
        if (numberCounter == 0) {
            num1 = n % 10;
            numberCounter++;

        } else if (numberCounter == 1) {
            if (n % 10 != num1) {
                num2 = n % 10;
                numberCounter++;
            }
        } else {
            if (n % 10 != num2) {
                return false;
            }
        }
        n /= 10;
    }
    return numberCounter == 2;
}

int main() {
    
    cout << is_bicolor(7722) << endl;
    cout << is_bicolor(444111) << endl;
    cout << is_bicolor(27) << endl;
    cout << is_bicolor(45) << endl;
    cout << is_bicolor(22229993) << endl;
    cout << is_bicolor(123) << endl;
    cout << is_bicolor(1) << endl;

    return 0;
}