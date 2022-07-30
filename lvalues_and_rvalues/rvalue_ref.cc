void func(int&& x) {}                   // func's argument is an rvalue reference

int main() {
	int y{2};
	//func(y);                          // Error: y is an lvalue
	func(2);                            // OK: 2 is an rvalue
}
