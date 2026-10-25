#include <iostream>
#include <string>

using namespace std;

int main() {
    int num1, num2, num3;
    char op;
    string comp;

    while (cin >> num1 >> op >> num2 >> comp >> num3) {
        int calc = 0;
        if (op == '+') calc = num1 + num2;
        else if (op == '-') calc = num1 - num2;
        else if (op == '*') calc = num1 * num2;

        bool result = false;
        if (comp == "<") result = (calc < num3);
        else if (comp == "<=") result = (calc <= num3);
        else if (comp == ">") result = (calc > num3);
        else if (comp == ">=") result = (calc >= num3);
        else if (comp == "==") result = (calc == num3);
        else if (comp == "!=") result = (calc != num3);

        if (result) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }
    }

    return 0;
}