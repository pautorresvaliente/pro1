#include <iostream>
#include <typeinfo> // Necesario para typeid
using namespace std;
template <typename Pepe>

Pepe s(Pepe a, Pepe b) {
    return a;
}
struct Man {
    bool sexy;
    string name;
};
int main() {
    // {string a = "abcde";
    // cout << a[1] << endl;
    // cout << typeid(a[4]).name() << endl;}
    // cout << s('a', 'b') << "\n";
    // Man man1;
    // man1.sexy = true;

    // cout << false << endl;
    cout << 5 + (5 % 8 != 0) << endl;

}