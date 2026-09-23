#include <iostream>
#include <string>


using namespace std;

int main() {
    string input;
    int i = 0;
    while(cin >> input) if (input == "hello") ++i;
    cout << i << endl;
}