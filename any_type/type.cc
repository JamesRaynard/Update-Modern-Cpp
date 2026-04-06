#include <iostream>
#include <any>
#include <string>
#include <typeinfo>

int main()
{
	std::any a;               // Create an empty std::any
	
	//To give the object a value, we assign to it
	a = 42;                   // a now contains the int value 42

	// std::make_any creates an initialized std::any object
	auto b = std::make_any<std::string>("Hello");
		
	if (a.type() == b.type())
		std::cout << "a and b contain data of the same type\n";
	else
		std::cout << "a and b do not contain data of the same type\n";
	
	if (a.type() == typeid(int))
		std::cout << "a contains an int\n";
	else
		std::cout << "a does not contain an int\n";
}