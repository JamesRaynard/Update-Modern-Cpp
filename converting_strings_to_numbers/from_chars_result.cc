#include <iostream>
#include <charconv>
#include <system_error>
#include <string>

void convert(const std::string& str)
{
	std::cout << "str: " << str << '\n';
	const char * const first = str.data();
	const char * const last = first + str.size();

	int number{0};
	
	auto res = std::from_chars(first, last, number);

	if (res.ptr != last)
		std::cout << "Error caused by character " << *(res.ptr) << '\n';

	std::cout << "Parsed " << res.ptr - first << " chars\n";

	if (res.ec == std::errc::result_out_of_range)
		std::cout << "result_out_of_range: " << number << "\n";
	else if (res.ec == std::errc::invalid_argument)
		std::cout << "invalid_argument\n";
	else
		std::cout << "Result: " << number << '\n';
	std::cout << '\n';
}

int main() {
	convert("3875");       // Parsed as 3875
	convert("387err5");    // Parsed as 387
	convert("Oops");       // Invalid argument
}