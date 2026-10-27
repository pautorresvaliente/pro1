#include <iostream>
using namespace std;

/**
 * @brief Passa un caràcter que representa un dígit en base 64 al seu
 * valor corresponent
 *
 * @pre Precondició: c és una lletra, un dígit decimal, o bé `+` o `/`
 */
int char_to_base64(char c)
{
    int output;
    if (c >= 'A' and c <= 'Z') output = c - 'A';
    else if (c >= 'a' and c <= 'z') output = c - 'a' + 26;
    else if (c >= '0' and c <= '9') output = c - '0' + 52;
    else if (c == '+') output = 62;
    else output = 63;

    return output;
}
/**
 * @pre dsada
 * @post Que locura
 */

int main() {
    cout << char_to_base64('A') << endl;
    cout << char_to_base64('b') << endl;
    cout << char_to_base64('7') << endl;
    cout << char_to_base64('/') << endl;
    
}