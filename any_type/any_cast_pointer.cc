#include <iostream>
#include <any>
#include <string>

int main()
{
	std::any a;               // Create an empty std::any
	
	//To give the object a value, we assign to it
	a = 42;                   // a now contains the int value 42

	// std::make_any creates an initialized std::any object
	auto b = std::make_any<std::string>("Hello");
		
	// To access the data from std::any, we use std::any_cast
	// Returns null pointer on error
	int *ai = std::any_cast<int>(&a);                         // Succeeds
	if (ai)
		std::cout << "a contains an int: " << *ai << '\n';
	
	std::string *bs = std::any_cast<std::string>(&b);         // Succeeds
	if (bs)
		std::cout << "b contains an string: " << *bs << '\n';
	
	int *bi = std::any_cast<int>(&b);                         // Returns null ptr
	if (!bi)
		std::cout << "b does not contain an int\n";
}