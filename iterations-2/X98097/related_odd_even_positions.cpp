#include <iostream>
using namespace std;

void printRelationship(int odd, int even) {
    if (odd > even) {
        // If even is 0, 0 is a multiple of odd
        if (even == 0) {
            cout << "0 = 0 * " << odd << endl;
        } 
        else if (odd % even == 0) {
            cout << odd << " = " << (odd / even) << " * " << even << endl;
        } 
        else {
            cout << "nothing" << endl;
        }
    } 
    else if (even > odd) {
        // If odd is 0, 0 is a multiple of even
        if (odd == 0) {
            cout << "0 = 0 * " << even << endl;
        } 
        else if (even % odd == 0) {
            cout << even << " = " << (even / odd) << " * " << odd << endl;
        } 
        else {
            cout << "nothing" << endl;
        }
    } 
    else {
        // If they are equal (e.g., 5 and 5)
        cout << odd << " = 1 * " << even << endl;
    }
}

int main() {
    int n;
    while (cin >> n) {
        bool isOdd = true;
        int totalOdd = 0;
        int totalEven = 0;
        
        // The problem states the last digit is an odd position, 
        // so processing right-to-left with % 10 is correct.
        while (n != 0) {
            if (isOdd) {
                totalOdd += n % 10;
            } else {
                totalEven += n % 10;
            }
            n /= 10;
            isOdd = !isOdd;
        }
        
        cout << totalOdd << " " << totalEven << endl;
        printRelationship(totalOdd, totalEven);
    }
    return 0;
}