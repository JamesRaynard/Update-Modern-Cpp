#include <iostream>
#include <charconv>
#include <system_error>
#include <string>

void test(double dbl)
{
	const int size{100};
	char buf[size];

	auto res = std::to_chars(buf, buf + size, dbl);

	if (res.ec == std::errc::value_too_large)
		std::cout << "value_too_large\n";
	else {
		// Add terminating null to display correctly
		*(res.ptr) = '\0';
		std::cout << "Result: " << buf << '\n';
	}
}

int main()
{
	// Converted to "3.14159"
	test(3.14159);
	
	// Converted to "1.2345678901234567"
	test(1.23456789012345678901234567890123456789012345678901234567890L);
}