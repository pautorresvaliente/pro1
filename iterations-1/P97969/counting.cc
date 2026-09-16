#include <iostream>
#include <string>
using namespace std;

int main() {
    string sequence;
    int output = 0;

    getline(cin, sequence);

    for (int i = 0; i < sequence.length(); i++) {
        if (sequence[i] == 'a') output++;
    }
    cout << output << endl;
}