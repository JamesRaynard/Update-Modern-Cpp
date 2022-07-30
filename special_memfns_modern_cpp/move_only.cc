#include <iostream>

using namespace std;

class Test {
public:
	// Default constructor
	Test() = default;
	/*
	// Copy constructor 
	Test(const Test&other) = delete;
	// Copy assignment operator
	Test& operator =(const Test& other) = delete;
	*/
	// Move constructor
    Test(Test&& other) noexcept {
		cout << "Move constructor called" << endl;
    }
	
	// Move assignment operator
	Test& operator =(Test&& other) noexcept {
		cout << "Move assignment operator called" << endl;
		return *this;
	}
};

int main() {
	Test test;

	Test test2(std::move(test));
	
	Test test3 = std::move(test);
}