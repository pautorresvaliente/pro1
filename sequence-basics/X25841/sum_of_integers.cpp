#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Read how many numbers there are

    int total_sum = 0;
    int current_num;

    // Loop exactly n times
    for (int i = 0; i < n; i++) {
        cin >> current_num;      // Automatically reads the whole integer, ignoring spaces
        total_sum += current_num;
    }   

    cout << total_sum << endl;
    
    return 0;
}