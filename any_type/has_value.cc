#include <iostream>
#include <any>

int main()
{
	std::any a;               // Create an empty std::any
	
	if (a.has_value())
		std::cout << "a contains data\n";
	else
		std::cout << "a does not contain data\n";
	
	//To give the object a value, we assign to it
    a = 42;                   // a now contains the int value 42
	
	if (a.has_value())
		std::cout << "a contains data\n";
	else
		std::cout << "a does not contain data\n";
}