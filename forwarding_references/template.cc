#include <iostream>

using namespace std;

class Test {};

template <class T>
void func(T&& x) {
	cout << "func called" << endl;
}

int main() {
	Test test;
	Test& rtest{test};

	func(test);
	func(rtest);
	func(std::move(test));
}