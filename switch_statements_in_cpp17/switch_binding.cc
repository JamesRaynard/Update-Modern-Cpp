#include <iostream>
#include <string>

using namespace std::literals;

enum class Result { SUCCEEDED, TIMED_OUT, FAILED };

auto fetch() {
	return std::pair{"abcdef"s, Result::SUCCEEDED};
}

int main()
{
	switch (auto [data, result] = fetch(); result) {
	case Result::SUCCEEDED:
		std::cout << "Fetched data: " << data << '\n';
		break;
	case Result::TIMED_OUT:
		std::cout << "The operation timed out\n";
		break;
	case Result::FAILED:
		std::cout << "The operation failed\n";
		break;
	}
}