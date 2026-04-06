#include <iostream>
#include <string>

using namespace std::literals;

class ref_member {
	std::string& str;
	public:
	ref_member(std::string& str) : str(str) {}
};

int main() {
	std::string str{"test"};
	//ref_member rm(str);
	ref_member rm("test"s);     // Error
}