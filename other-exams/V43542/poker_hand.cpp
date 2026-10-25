#include <iostream>
#include <string>
using namespace std;


string poker_hand(char card1, char card2, char card3) {
    int equal_cards = 0;

    if (card1 == card2) equal_cards++;
    if (card2 == card3) equal_cards++;
    if (card1 == card3) equal_cards++;

    if (equal_cards == 0) {
        return "All cards different";
    } else if (equal_cards == 1) {
        return "Pair";
    } else {
        if (card1 == 'A') {
            return "Trio of Aces!";
        } else {
            return "Trio";
        }
    }
}

int main() {

    cout << poker_hand('A', 'A', 'A') << endl; // => "Trio of Aces!"
    cout << poker_hand('A', '1', 'A') << endl; // => "Pair"
    cout << poker_hand('Q', 'Q', 'A') << endl; // => "Pair"
    cout << poker_hand('A', '9', '9') << endl; // => "Pair"
    cout << poker_hand('1', '5', '8') << endl; // => "All cards different"
    cout << poker_hand('4', '4', '4') << endl; // => "Trio"
    return 0;
}