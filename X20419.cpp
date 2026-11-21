#include <iostream>
#include <vector>
#include <string>
using namespace std;


char most_frequent_letter(const string& s) {
    const int LENGTH_ALPHABET = 'z' - 'a' + 1;

    vector<int> freq(LENGTH_ALPHABET, 0);

    for (char x : s) {
        ++freq[x - 'a'];
    }

    char most_freq;
    int frequency = 0;
    for (int i = 0; i < LENGTH_ALPHABET; ++i) {
        if (freq[i] > frequency) {
            most_freq = char(i + 'a');
            frequency = freq[i];
        }
    }
    return most_freq;
}

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);

    int n, sum = 0;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        sum += v[i].size();
    }
    double avg = double(sum) / n;
    cout << avg << endl;

    for (int i = 0; i < n; ++i) {
        if (v[i].size() >= avg) {
            cout << v[i] << ": " << most_frequent_letter(v[i]) << endl;
        }
    }
    return 0;
}