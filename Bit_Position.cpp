// Premish Ninawe
// 23070123092
// ENTC B1
#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int n, s, r;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Enter the bit position to set (0 to 7): ";
    cin >> s;

    cout << "Enter the bit position to reset (0 to 7): ";
    cin >> r;

    cout << n << " in binary is " << bitset<8>(n) << endl;

    int n_set = n | (1 << s);
    cout << "Result after setting bit number " << s << " is " << bitset<8>(n_set) << endl;

    int n_reset = n_set & ~(1 << r);
    cout << "Result after resetting bit number " << r << " is " << bitset<8>(n_reset) << endl;

    return 0;
}
