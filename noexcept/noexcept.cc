#include <iostream>

using namespace std;

void does_not_throw(int input) noexcept {       // I promise not to throw any exceptions
    // No exceptions thrown here, honest
}

void does_throw(int input) {       // May throw exceptions

}

int main() {
	int i;
	cout << "Is does_not_throw noexcept? ";
	cout << boolalpha << noexcept(does_not_throw(i)) << endl;
	cout << "Is does_throw noexcept? ";
	cout << boolalpha << noexcept(does_throw(i)) << endl;
}