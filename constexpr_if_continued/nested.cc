#include <string>
#include <limits>

template <typename T>
constexpr void func()
{
	// Must be integer, but not bool, char, etc
	if constexpr (std::is_integral<T>::value) {
		if constexpr (std::numeric_limits<T>::max() > 255) {
			// Do something ...
		}
	}
}

int main()
{
	func<std::string>();  // Compiles
}