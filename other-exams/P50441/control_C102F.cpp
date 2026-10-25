#include <iostream>
#include <string>
using namespace std;


int main() {
    string name, youngestName;
    int age, youngestAge = 999999;

    for (int i = 0; i < 3; i++) {
        cin >> name >> age;

        if (age < youngestAge) {
            youngestAge = age;
            youngestName = name;
        }
    }
    
    cout << youngestName << endl;
    return 0;
}