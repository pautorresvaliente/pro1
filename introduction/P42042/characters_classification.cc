#include <iostream>
using namespace std;

int main() {
    char val;
    
    cin >> val;
    bool isUpper = val >= 'A' && val <= 'Z';
    bool isVowel = false;
    if (isUpper) {
        char vowelsUpper[] = {'A', 'E', 'I', 'O', 'U'};
        for (char v : vowelsUpper) {
            if (v == val) {
                isVowel = true;
                break;
            }
        }
    } else {
        char vowelsLower[] = {'a', 'e', 'i', 'o', 'u'};
        for (char v : vowelsLower) {
            if (v == val) {
                isVowel = true;
                break;
            }
        }
       
    }
    cout << (isUpper ? "uppercase" : "lowercase") << endl;
    cout << (isVowel ? "vowel" : "consonant") << endl;
    return 0;
}   