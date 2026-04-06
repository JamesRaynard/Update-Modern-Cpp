#include <iostream>
#include <map>
#include <string>

int main() {
	std::map<std::string, int> scores;                   // Create an std::map object

	auto res = scores.insert_or_assign("Graham", 66);
	
	auto iter = res.first;
	if (res.second) {
		std::cout << "Inserted a new element with key " << iter->first;
		std::cout << " and value " << iter->second << '\n';
	}
	else {
		std::cout << "Modified the element with key " << iter->first;
		std::cout << " to have value " << iter->second << '\n';
	}
}
