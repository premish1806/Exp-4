# Exp-4 Bitwise operators in C++

## Aim:
To explore and understand the functionality of bitwise operators in C++ through practical examples, demonstrating how these operators manipulate the binary representations of boolean values.

## Software Used:
- Dev c++
  
## Theory:
<strong>Bitwise Operations:</strong><br>
Bitwise operators in C++ perform operations on the binary representations of integer and boolean values. They include:<br>

.Bitwise AND (&): Compares each bit of its operands; the result is 1 only if both corresponding bits are 1.<br>
.Bitwise OR (|): Compares each bit of its operands; the result is 1 if at least one corresponding bit is 1.<br>
.Bitwise XOR (^): Compares each bit of its operands; the result is 1 if the corresponding bits are different.<br>
.Bitwise NOT (~): Inverts all the bits of the operand.<br>
.Left Shift (<<): Shifts the bits of the first operand to the left by the number of positions specified by the second operand.<br>
.Right Shift (>>): Shifts the bits of the first operand to the right by the number of positions specified by the second operand.<br>

## Program 1: Take two numbers as input from user and perform bitwise logical operations on those numbers.
<strong> Code: </strong>
<br>
```cpp
// Premish Ninawe
// 23070123092
// ENTC B1
#include <iostream>
using namespace std;
int main(){
    bool a;
    bool b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Bitwise AND (" << a << "&" << b << "): " << (a & b) << endl;
    cout << "Bitwise OR (" << a << "|" << b << "): " << (a | b) << endl;
    cout << "Bitwise XOR (" << a << "^" << b << "): " << (a ^ b) << endl;
    cout << "Bitwise NOT (~" << a << "): " << (~a) << endl;
    cout << "Left Shift (" << a << "<<1): " << (a << 1) << endl;
    cout << "Right Shift (" << a << ">>1): " << (a >> 1) << endl;
    return 0;
}
```
<strong> Output: </strong>
<br>


## Conclusion:
Through this code, we learned how bitwise operators in C++ manipulate the individual bits of boolean values. These operators allow us to perform precise operations, like combining or shifting bits, which are essential for tasks involving low-level data processing and optimization.

