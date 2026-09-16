// Creating the Rock Paper Scissor Game

#include <iostream>
using namespace std;

char getUserChoice() {
    char choice;

    cout << "Choose (R / P / S): ";

    cin >> choice;
    cout << "Your choice: " << choice << endl;
    return choice;
}

char getMachineChoice() {
    char choice;
    int randomNum;

    srand(time(NULL));

    randomNum = rand() % 3;

    switch (randomNum) {
        case 0: 
            choice = 'R';
            break;
        case 1:
            choice = 'P';
            break;
        case 2:
            choice = 'S';
            break;
    }
    cout << "Machine's choice: " << choice << endl;
    return choice;
}

string roundWinner(char userChoice, char machineChoice) {
    if (userChoice == machineChoice) {
        return "Draw";
    }
    else if (userChoice == 'R') {
        if (machineChoice == 'P') {
            return "Machine";
        }
        else {
            return "User";
        }
    }
    else if (userChoice == 'P') {
        if (machineChoice == 'S') {
            return "Machine";
        }
        else {
            return "User";
        }
    }
    else {
        if (machineChoice == 'R') {
            return "Machine";
        }
        else {
            return "User";
        }
    }
}


int main() {
    bool winner = false;
    int userWins = 0;
    int machineWins = 0;

    cout << "Rock Paper Scissor Game!" << endl;

    while (!winner) {
        char userChoice = getUserChoice();
        char machineChoice = getMachineChoice();

        string round = roundWinner(userChoice, machineChoice);

        if (round == "User") {
            userWins++;
            cout << "You win this round. " << userWins << " wins so far." << endl;
        }
        else if (round == "Machine") {
            machineWins++;
            cout << "Machine win this round. " << machineWins << " wins so far." << endl;
        }
        else {
            cout << "Draw." << endl;
        }
        cout << userWins << " - " << machineWins << endl;
        if (userWins >= 3 || machineWins >= 3) {
            winner = true;
        }
    }
    cout << "And the winner is... " << (userWins == 3 ? "You" : "Machine") << endl;

    return 0;
}
