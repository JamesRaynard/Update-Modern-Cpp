#include <iostream>

using namespace std;

class Test {
    public:
        Test() {}
        Test(const Test& other) { cout << "Copying\n"; }  // Copy constructor with side effect
};

// Function returning a temporary instance
Test func() {                                                            
    return Test();
}

int main() {
	cout << "Calling func()" << endl;
	Test test = func();                 // How many times is "Copying" printed out?
	cout << "Returned from func()" << endl;
}
