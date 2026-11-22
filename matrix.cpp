#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {
    int n, m;

    cin >> n >> m;

    vector<vector<int>> v(n, vector<int>(m));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> v[i][j];
        }
    }

    string type;
    while (cin >> type) {
        if (type == "row") {
            int row;
            cin >> row;

            cout << "row " << row << ":";
            for (int i = 0; i < m; ++i) {
                cout << " " << v[row - 1][i];
            }
            cout << endl;
        } else if (type == "column") {
            int column;
            cin >> column;

            cout << "column " << column << ":";
            for (int i = 0; i < n; ++i) {
                cout << " " << v[i][column - 1];
            }
            cout << endl;
        } else {
            int row, column;
            cin >> row >> column;

            cout << "element " << row << " " << column << ": " << v[row - 1][column - 1] << endl;
        }
    }
    return 0;
}