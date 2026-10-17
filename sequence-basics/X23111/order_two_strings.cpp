#include <iostream>
using namespace std;

int main() {
    char word1[100], word2[100];

    while (cin >> word1 >> word2) {
        int i = 0;
        while (word1[i] == word2[i] && word1[i] != '\0') {
            i++;
        }
        if (word1[i] < word2[i]) {
            cout << word1 << " " << word2 << endl;
        } else {
            cout << word2 << " " << word1 << endl;
        }
    }

    return 0;
}