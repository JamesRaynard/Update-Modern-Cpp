#include <iostream>
#include <map>
#include <string>

int main() {
	std::map<std::string, int> scores;                      // Create an std::map object
	
	// scores["Graham"] = 78;
	
	if (auto [element, inserted] = scores.insert_or_assign("Graham", 66); inserted) {
		std::cout << "Inserted a new element with key " << element->first;
		std::cout << " and value " << element->second << '\n';
	}
	else {
		std::cout << "Modified the element with key " << element->first;
		std::cout << " to have value " << element->second << '\n';
	}
}
