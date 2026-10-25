#include <iostream>
using namespace std;


int main() {
    int n;

    cin >> n;
    for (int i = 0; i < n; i++) 
    {
        int total = 0, x, prev;
        cin >> prev;
        while (cin >> x && x > 0 && prev != 0) 
        {
            if (prev < x) 
            {
                total++;
            }
            prev = x;
        }
        cout << total << endl;
    }
}