#include <iostream>
#include <string>

using namespace std;


void output(string name, int age) {
    cout << name << ", you look younger. I thought you were " << age << " years old." << endl;
    return;
}


int calculate_look_age(int age) {
    int temp = age, total_substracted = 0;
    while (age >= 10) {
        total_substracted++;
        age -= 10;
    }
    return temp - total_substracted;
}


int main() {
    string word, name, prev;
    int n;
    while (cin >> word) {
        if (prev == "is") {
            name = word;
        } else if (prev == "am") {
            n = stoi(word);
            output(name, calculate_look_age(n));
        }
        prev = word;
    }
}