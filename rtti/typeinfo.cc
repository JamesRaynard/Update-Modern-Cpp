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
	
	const type_info& tBase = typeid(*pBase);
	const type_info& tDerived = typeid(derived);
	
	cout << "Dynamic type of pBase is " << tBase.name() << endl;
	cout << "Dynamic type of derived is " << tDerived.name() << endl;
}