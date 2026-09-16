#include <iostream>
using namespace std;

int main() {
    int array[] = {3, 5, 2, 9, 10, 4, 6, 7, 1, 8};
    int size = sizeof(array) / sizeof(array[0]);

    cout << "Size: " << size << endl;

    for (int i = size - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (array[j] >= array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array [j + 1] = temp;
            }
        }
        // Just to print the process
        for (int number : array) {
            cout << number << " ";
        }
        cout << endl;
    }
    cout << "Final Array: " << endl;
    for (int number : array) {
            cout << number << " ";
        }
    return 0;
}