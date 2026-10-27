#include <iostream>
using namespace std;

int main()
{
    char text1, text2, text3;

    int happiness_counter = 0, sadness_counter = 0;

    if (cin >> text1)
    {
        if (cin >> text2)
        {
            while (cin >> text3)
            {
                if ((text1 == ':' and text2 == '-' and text3 == ')') or (text1 == '(' and text2 == '-' and text3 == ':'))
                {
                    happiness_counter++;
                }
                else if ((text1 == ':' and text2 == '-' and text3 == '(') or (text1 == ')' and text2 == '-' and text3 == ':'))
                {
                    sadness_counter++;
                }

                text1 = text2;
                text2 = text3;
            }
        }
    }

    cout << happiness_counter << " " << sadness_counter << endl;
    return 0;
}