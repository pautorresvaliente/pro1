#include <iostream>
#include <algorithm>
#include <map>

int main() {
    int n;
    char c;
    if (!(std::cin >> n)) {
        return 0;
    }
    std::map<char, int> freq_map;
    for (int i = 0; i < n; i++) {
        std::cin >> c;
        freq_map[c]++;
    }
    char output = 'a';
    for (int i = 'a'; i <= 'z'; i++) {
        if (freq_map[i] > freq_map[output]) {
            output = i; // Si trobem una lletra amb més aparicions, ens guardem la lletra
        }
    }
    std::cout << "majoria de " << output << std::endl;
    std::cout << freq_map[output] << " repeticio(ns)" << std::endl;
}