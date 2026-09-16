// Elementos
// https://jutge.org/problems/P51352_es
// P51352_es:std:none:G++17
// Created on 9/13/2026, 10:57:50 PM by Pau Torres Valiente

#include <iostream>
using namespace std;

int main() {
    char val1, val2, res;

    cin >> val1 >> val2;

    if (val1 == val2) {
        res = '-';
    } else if (val1 == 'A') {
        if (val2 == 'P') {
            res = '1';
        } else {
            res = '2';
        }
    } else if (val1 == 'P') {
        if (val2 == 'V') {
            res = '1';
        } else {
            res = '2';
        }
    } else {
        if (val2 == 'A') {
            res = '1';
        } else {
            res = '2';
        }
    }
    cout << res << endl;
}
