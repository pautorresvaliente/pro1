#include <iostream>

using namespace std;

int digitsCounter(int num)
{
    if (num == 0)
        return 1;
    int digits = 0;
    while (num > 0)
    {
        digits++;
        num /= 10;
    }
    return digits;
}

int getMiddleDigit(int num, int digits)
{
    int helper = 1;
    for (int i = 0; i < digits / 2; i++)
    {
        helper *= 10;
    }
    return (num / helper) % 10;
}

int main()
{
    int n;
    cin >> n;

    int prevMiddle = -1;

    for (int k = 0; k < 2 * n; k++)
    {
        int currentNum;
        cin >> currentNum;

        int digits = digitsCounter(currentNum);

        // Even number of digits loses immediately
        if (digits % 2 == 0)
        {
            if (k % 2 == 0)
                cout << "B\n"; // Anna lost, Bernard wins
            else
                cout << "A\n"; // Bernard lost, Anna wins
            return 0;
        }

        int middle = getMiddleDigit(currentNum, digits);

        // For all numbers after the first one, check middle digit match with previous
        if (k > 0 && middle != prevMiddle)
        {
            if (k % 2 == 0)
                cout << "B\n"; // Anna lost
            else
                cout << "A\n"; // Bernard lost
            return 0;
        }

        prevMiddle = middle;
    }

    cout << "=\n";
    return 0;
}