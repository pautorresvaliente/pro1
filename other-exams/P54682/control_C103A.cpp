#include <iostream>
using namespace std;

bool sonIguales(const char a[], const char b[]) {
    int i = 0;
    while (a[i] != '\0' and b[i] != '\0') {
        if (a[i] != b[i]) return false;
        i++;
    }
    return a[i] == '\0' and b[i] == '\0';
}

int main() {
    char l1[50], l2[50], l3[50], l4[50];
    
    while (cin >> l1 >> l2 >> l3 >> l4) {
        if (sonIguales(l1, "A____A") and sonIguales(l2, "||[]||") and 
            sonIguales(l3, "||__||") and sonIguales(l4, "~~~~~~")) {
            cout << "castell" << endl;
        } 
        else if (sonIguales(l1, "----") and sonIguales(l2, "[][]") and 
                 sonIguales(l3, "[][]") and sonIguales(l4, "[][]")) {
            cout << "edifici" << endl;
        } 
        else {
            cout << "no res" << endl;
        }
    }
    
    return 0;
}