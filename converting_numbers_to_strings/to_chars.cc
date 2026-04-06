#include <iostream>
#include <charconv>
#include <system_error>
#include <string>

int main()
{
	int number{42};
	const int size{100};
	char buf[size];

	auto res = std::to_chars(buf, buf + size, number);

    // Add terminating null to display correctly
	*(res.ptr) = '\0';
	std::cout << "Result: " << buf << '\n';
	
	// Construct an std::string
	std::string result(buf, res.ptr - buf);
	std::cout << "Result: " << result << "\n";
}