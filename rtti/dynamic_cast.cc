#include <iostream>

using namespace std;

class Base {
	public:
	virtual ~Base() {}
};
class Derived : public Base {
	public:
	void derived_func() { cout << "Calling derived_func()\n"; }
};

int main() {
	Derived d;
	Base *pBase = &d;
	
	Derived *pDerived = dynamic_cast<Derived *>(pBase);
	
	// Dangerous!
	pDerived->derived_func();
}