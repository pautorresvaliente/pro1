#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    string first = "";  // Stores the largest word
    string second = ""; // Stores the second largest word

    while (cin >> word) {
        if (word > first) {
            // New largest found. The old largest shifts down to second place.
            second = first;
            first = word;
        } 
        else if (word > second && word < first) {
            // It's not the largest, but it beats the current second place.
            // (word < first) ensures we ignore exact duplicates of the largest word.
            second = word;
        }
    }

    cout << second << endl;
    return 0;
}