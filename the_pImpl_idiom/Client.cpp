#include "Handle.h"
#include <iostream>

int main() {
	//Date date(16, 11, 2019);
	Handle date(16, 11, 2019);
	date.print();
	std::cout << "\n";
	date.set_day(17);
	date.print();
	std::cout << "\n";
}