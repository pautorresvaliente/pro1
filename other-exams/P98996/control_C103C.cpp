#include <iostream>
using namespace std;


int main() {
    char letter;

    cin >> letter;

    if (letter >= 'a' and letter <= 'z') {
        cout << letter << " -> " << letter - 'a' + 1 << endl;
    } else if (letter >= 'A' and letter <= 'Z') {
        cout << letter << " -> " << letter - 'A' + 1 << endl;
    } else {
        cout << letter << " -> no es una lletra" << endl;
    }
    return 0;
}