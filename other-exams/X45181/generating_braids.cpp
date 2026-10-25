#include <iostream>
#include <string>
using namespace std;


int main() {
    int lines, width, segment;

    while (cin >> lines >> width >> segment) {
        // Neither of them can be zero
        string widthPattern = "";
        for (int i = 0; i < width; i++) {
            widthPattern += "*";
        }

        bool to_right = true;
        int spaces = 0;
        while (lines > 0) {
            string braid_line = "";

            for (int i = 0; i < spaces; i++) {
                braid_line += " ";
            }
            if (spaces == segment || (spaces == 0 && !to_right)) {
                to_right = !to_right;
            }
            if (to_right) {
                spaces++;
            } else {
                spaces--;
            }
            braid_line += widthPattern;
            cout << braid_line << endl;
            lines--;
        }
        cout << endl;
    }
    return 0;
}