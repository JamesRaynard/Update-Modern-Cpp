#include "buffer_manager.h"

#include <iostream>
#include <vector>

using namespace std;

int main() {
	try {
		BufferManager a(10);
		BufferManager b{a};
		BufferManager c(5);
		BufferManager d(7);
		a = d;
	}
	catch (std::exception& e) {
		cout << "Caught exception: " << e.what() << endl;
	}
}