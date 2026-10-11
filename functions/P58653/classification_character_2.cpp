#include <iostream>
#include <string>
using namespace std;



void print_line(char c, string s, bool b) {
    cout << s << "('" << c << "') = ";
    if (b) cout << "true" << endl;
    else cout << "false" << endl;
}

int main() {
    char c;
    cin >> c;
    bool letter = false;
    bool vowel = false;
    bool consonant = false;
    bool uppercase = false;
    bool lowercase = false;
    bool digit = false;

    if (c >= 'a' && c <= 'z') {
        letter = true;
        lowercase = true;
    } else if (c >= 'A' && c <= 'Z') {
        letter = true;
        uppercase = true;
    }

    if (lowercase || uppercase) {
        char c_lower = tolower(c);
        if (c_lower == 'a' || c_lower == 'e' || c_lower == 'i' || c_lower == 'o' || c_lower == 'u') {            
            vowel = true;
        } else {
            consonant = true;
        }
    }

    if (c - '0' >= 0 && c - '0' <= 9) {
        digit = true;
    }
    print_line(c, "letter", letter);
    print_line(c, "vowel", vowel);  
    print_line(c, "consonant", consonant);
    print_line(c, "uppercase", uppercase);
    print_line(c, "lowercase", lowercase);
    print_line(c, "digit", digit);
    return 0;
}