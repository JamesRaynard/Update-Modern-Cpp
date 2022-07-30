#include <iostream>

using namespace std;

int x{23};                          // x defined in the global namespace

namespace A {
	int x{47};                          // x defined in the namespace A - hides global x
	void func() { 
		cout << "x = " << x << endl;        // Will use A's x ==> 47
		cout << "::x = " << ::x << endl;    // Will use global x ==> 23
	}
}

int main() {
	A::func();
}