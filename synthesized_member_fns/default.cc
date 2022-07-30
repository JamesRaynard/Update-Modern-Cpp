#include <iostream>

using namespace std;

class Test {
	int i;
public:
	// Test(int i) : i(i) {}
	// Test() {}
	// Test(const Test& other) : i(other.i) {}
	// Test& operator =(const Test& other) { i = other.i; }
	// ~Test() {}
	void print() { cout << i << endl; }
};

int main() {
	Test test;
	//Test test(5);
	cout << "test after default constructor: ";
	test.print();
	//Test test2(7);
	Test test2;
	cout << "test2 after default constructor: ";
	test2.print();
	Test test3 = test;
	cout << "test3 after copy constructor: ";
	test3.print();
	test = test2;
	cout << "test after assignment operator: ";
	test.print();
}