#include <iostream>
#include <bitset>

using namespace std;

int main() {
	bitset<8> b1{"10101110"};                                // Initialize from string literal - bitset with value 174
	bitset<8> b2{0xae};                                      // Initialize from integer value (decimal or hexadecimal)
	bitset<8> b3{0b1010'1110};                               // Initialize from binary constant (C++14)

	bitset<8> b4{0b010'1010};                                // Bitset with value 42

	cout << "b1 is " << b1 << endl;                          // Displays 10101110
	cout << "b4 is " << b4 << endl;                          // Displays 00101010
	cout << "b2 in decimal is " << b2.to_ulong() << endl;    // Displays 174
	cout << "b2 as a string is " << b2.to_string() << endl;  // Displays 10101110

	cout << "~b1 is " << ~b1 << endl;                        // Displays 01010001

	cout << "b1 & b4 is " <<(b1 & b4) << endl;               // Displays 00101010
	cout << "b1 | b4 is " << (b1 | b4) << endl;              // Displays 10101110
	cout << "b1 ^ b4 is " << (b1 ^ b4) << endl;              // Displays 10000100
}