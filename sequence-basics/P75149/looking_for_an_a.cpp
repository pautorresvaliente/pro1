#include <iostream>
using namespace std;

int main() {
    char c;
    
    while (cin >> c && c != '.') {
        if (c == 'a') {
            cout << "yes" << endl;
            return 0; 
        }
    }
    
    cout << "no" << endl;
    return 0;
}