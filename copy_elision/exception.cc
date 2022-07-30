#include <iostream>

using namespace std;

class Test {
    public:
        Test() {}
        Test(const Test& other) { cout << "Copying\n"; }  // Copy constructor with side effect
		void print() { cout << "Hello from Test" << endl; }
};


int main() {
	try {
		throw Test();
	}
	catch (Test test) {
		cout << "Exception caught" << endl;
		test.print();
	}
}
