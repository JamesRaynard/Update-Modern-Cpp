#include <iostream>

using namespace std;

void func(int&& x) {
	cout << "Function called\n";
}                   // func's argument is an rvalue reference

int main() {
	const int& x{3};
	int y{2};
	//func(y);                          // Error: y is an lvalue
	func(2);                            // OK: 2 is an rvalue
	func(x);
}
