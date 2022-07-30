#include <iostream>

using namespace std;

void func(int& x) {
	cout << "func called with argument int&" << endl;
}

int main() {
	//int& & x = y;                   // Error

	using RI = int&;                  // or typedef int& RI;

	int i{99};
	RI j{i};                          // j is a reference to int
	RI& rr{j};                        // rr is a reference to (reference to int)
	
	func(rr);
}