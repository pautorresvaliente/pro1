#include <iostream>
using namespace std;

int reversed_number(int num)
{
    int reversed_num = 0;

    while (num != 0)
    {
        reversed_num = reversed_num * 10 + num % 10;
        num /= 10;
    }

    return reversed_num;
}


int main()
{
    int num;

    while (cin >> num) {
        if (num > 100)
        {
            if (num == reversed_number(num))
            {
                cout << num << "!\n";
                return 0;
            }
        }
    }

   cout << "Res." << endl; 
   return 0;
}