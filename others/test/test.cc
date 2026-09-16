#include <iostream>
#include <typeinfo> // Necesario para typeid
using namespace std;

int main() {

    string a = "abcde";
    cout << a[1] << endl;
    cout << typeid(a[4]).name() << endl;

}