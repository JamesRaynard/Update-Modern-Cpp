#include <string>
#include <limits>

template <typename T>
constexpr void func()
{
	// Must be integer, but not bool, char, etc
	if constexpr (std::is_integral<T>::value && std::numeric_limits<T>::max() > 255) {
	}
}

int main()
{
	func<std::string>();  // Substitution failure - numeric_limits does not support std::string
}