#include <iostream>

using namespace std;

class MyClass {};

// Class with move constructor
class Test {
  private:
    int i{0};
    MyClass m;
  public:
    Test() = default;

	// Copy constructor 
	Test(const Test&other) : i(other.i), m(other.m) {
		cout << "Copy constructor called" << endl;
	}

    // Move constructor
    Test(Test&& other) noexcept : i(i), m(std::move(other.m)) {
		cout << "Move constructor called" << endl;
    }

	// Copy assignment operator
	Test& operator =(const Test& other) {
		cout << "Copy assignment operator called" << endl;
		if (this != &other) {
			i = other.i;
			m = other.m;
		}
		return *this;
	}
	
	// Move assignment operator
	Test& operator =(Test&& other) noexcept {
		cout << "Move assignment operator called" << endl;
		if (this != &other) {                          
			i = other.i;                       // Swap data members
			m = std::move(other.m);            // Force move assignment operator to be called
		}
		return *this;
	}
};

int main() {
	Test test;                                 // Call default constructor
	cout << "Copying: ";
	Test test2 = test;                         // Call copy constructor 
	cout << "Moving temporary: ";
	Test test3 = Test();                       // Call move constructor by using temporary instance
	cout << "Moving rvalue ref: ";
	Test test4(std::move(test));               // Call move constructor by casting test to rvalue ref
	
	cout << endl;
	
	Test test5;
	cout << "Assigning: ";
	test5 = test;                              // Call copy assignment operator
	
	Test test6;
	cout << "Assigning from temporary: ";
	test6 = Test();                            // Call move assignment operator
}