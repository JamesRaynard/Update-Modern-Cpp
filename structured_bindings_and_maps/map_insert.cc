#include <iostream>
#include <map>
#include <string>

using namespace std::literals;

// std::map has an insert member function which returns an std::pair
// The "second" member is a bool indicating success/failure
// The "first" member is an iterator to the new element on success
// On failure, it is an iterator to the element that caused the insert() to fail

// C++11/14
void cpp14_insert(std::map<int, std::string>& m, int new_key, std::string new_val) {
	// std::pair<std::map<int, std::string>::iterator, bool>
	auto pr = m.insert({new_key, new_val});

	if (pr.second)
		std::cout << "Inserted a new element\n";
	else {
		auto el = pr.first;
		std::cout << "Insert failed ";
		std::cout << "due to an element with key: " << el->first
			<< " and value: " << el->second << '\n';
	}
}

// C++17
void cpp17_insert(std::map<int, std::string>& m, int new_key, std::string new_val) {
	// Insert a new element
	auto [iter, success] = m.insert({new_key, new_val});

	if (success)
		std::cout << "Inserted a new element\n";
	else {
		auto [key, value] = *iter;
		std::cout << "Insert failed ";
		std::cout << "due to an element with key: " << key << " and value: " << value << '\n';
	}
}

int main()
{
	// std::map whose elements are std::pair<int, std::string>
	std::map<int, std::string> m ={{1, "Hello"s}};

	cpp14_insert(m, 1, "Hello again"s);
	cpp14_insert(m, 2, "How are you?"s);

	cpp17_insert(m, 1, "Hello again"s);
	cpp17_insert(m, 3, "Goodbye"s);	
}