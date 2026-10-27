#include <iostream>

using namespace std;

int main()
{
    char caracter, prev = '\0';
    int times_a = 0, index_a = 0, times_c = 0, index_c = 0, times_g = 0, index_g = 0, times_t = 0, index_t = 0, counter = 0, index_start_counter = 0, current_index = 0;

    while (cin >> caracter)
    {
        if (caracter == '.')
        {
            // Conditional printing: only print (index) if the sequence was found (times > 0)
            cout << "\"A\" = " << times_a;
            if (times_a > 0) cout << "(" << index_a << ")";
            
            cout << ", \"C\" = " << times_c;
            if (times_c > 0) cout << "(" << index_c << ")";
            
            cout << ", \"G\" = " << times_g;
            if (times_g > 0) cout << "(" << index_g << ")";
            
            cout << ", \"T\" = " << times_t;
            if (times_t > 0) cout << "(" << index_t << ")";
            
            cout << "\n";

            times_a = 0, index_a = 0, times_c = 0, index_c = 0, times_g = 0, index_g = 0, times_t = 0, index_t = 0, index_start_counter = 0, current_index = 0;
            
            prev = '\0';
            counter = 0;
            continue; 
        }

        current_index++;

        if (caracter == 'A')
        {
            if (prev == caracter) {
                counter++;
            } else {
                prev = caracter;
                counter = 1;
                index_start_counter = current_index;
            }
            if (counter > times_a) {
                times_a = counter;
                index_a = index_start_counter;
            }
        }
        else if (caracter == 'C')
        {
            if (prev == caracter) {
                counter++;
            } else {
                prev = caracter;
                counter = 1;
                index_start_counter = current_index;
            }
            if (counter > times_c) {
                times_c = counter;
                index_c = index_start_counter;
            }
        }
        else if (caracter == 'G')
        {
            if (prev == caracter) {
                counter++;
            } else {
                prev = caracter;
                counter = 1;
                index_start_counter = current_index;
            }
            if (counter > times_g) {
                times_g = counter;
                index_g = index_start_counter;
            }
        }
        else if (caracter == 'T') 
        {
            if (prev == caracter) {
                counter++;
            } else {
                prev = caracter;
                counter = 1;
                index_start_counter = current_index;
            }
            if (counter > times_t) {
                times_t = counter;
                index_t = index_start_counter;
            }
        }
    }

    return 0;
}