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
	
	// To access the data from any, we use any_cast
	// Throws an exception on error
	try {
		std::cout << std::any_cast<int>(a) << '\n';     // Succeeds
		std::cout << std::any_cast<std::string>(b) << '\n';  // Succeeds
		//std::cout << std::any_cast<int>(b) << '\n';   // Throws  bad_any_cast
	}
	catch (const std::bad_any_cast& e) {
		std::cout << "Caught exception: " << e.what() << '\n';
	}
}