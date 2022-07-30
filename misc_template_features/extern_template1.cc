#include "extern_template.h"

using namespace std::literals;

void func(const std::string& str) {
	std::cout << "func() printing " << str << ": ";
	print(std::cout, str);
}