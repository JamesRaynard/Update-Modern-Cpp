#include <iostream>
#include <string_view>
#include <string>

using namespace std::literals;

class ref_member {
	std::string_view str;
public:
	ref_member(std::string_view str): str(str) {}
	void print() { std::cout << str << '\n'; }
};

int main()
{
	ref_member rm{"Long string to initialize the class"s};
	rm.print();
}