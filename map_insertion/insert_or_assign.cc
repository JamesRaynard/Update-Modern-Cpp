#include <iostream>
#include <map>
#include <string>

int main() {
	std::map<std::string, int> scores;                         // Create an std::map object
	
	// scores["Graham"] = 78;
	auto res = scores.insert(std::make_pair("Graham", 66));    // What effect does this have?
	
	auto iter = res.first;
	if (res.second) {
		std::cout << "Inserted a new element with key " << iter->first;
		std::cout << " and value " << iter->second << '\n';
	}
	else {
		std::cout << "Modifying existing element with key " << iter->first;
		iter->second = 66;
		std::cout << " to have value " << iter->second << '\n';
	}
}
