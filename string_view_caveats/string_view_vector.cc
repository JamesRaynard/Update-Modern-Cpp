#include <iostream>
#include <string_view>
#include <vector>

using namespace std::literals;

int main()
{
	std::vector<std::string_view> words;
	words.push_back("What are words worth?"s);
	
	for (auto word : words)
		std::cout << word << '\n';
}