#include <iostream>
#include <optional>

int main()
{
	std::optional<int> opt;               // Create an empty std::optional
    
	//To give an optional a value, we assign to it
    opt = 42;                             // opt now contains the value 42

	// To access the data from an optional, we use the same syntax as for pointers
	// Even though the data is stored as a value!
	if (opt)
		std::cout << *opt << '\n';
	else
		std::cout << "opt is empty\n";
	
	//To make an existing optional empty, we assign to {}
    opt = {};                             // opt is now empty
	
	if (opt)
		std::cout << *opt << '\n';
	else
		std::cout << "opt is empty\n";
}