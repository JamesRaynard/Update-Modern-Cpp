#include <iostream>
#include <typeinfo>

using namespace std;

class Base {
	public:
	virtual ~Base() {}
};
class Derived : public Base {};

int main() {
	Derived derived;
	Base *pBase = &derived;
	
	if (typeid(*pBase) == typeid(derived))
		cout << "pBase points to a Derived object" << endl;
	else
		cout << "pBase does not point to a Derived object" << endl;
}