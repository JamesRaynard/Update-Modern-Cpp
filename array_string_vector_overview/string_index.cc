#include <iostream>
#include <string>

using namespace std;

int main() {
	string hello("Hello");                       // Allocates storage for string and populates it
	cout << hello[0];                            // The first element in hello - this will be equal to 'H'
	cout << hello[4];                            // The fifth element in hello - this will be equal to 'o'
	hello[3] = 'b';                              // Changes the fourth element in hello from 'l' to 'b'

	int i;
	for (i = 0; i < hello.size(); ++i) {
		cout << "Element with index " << i << " has value " << hello[i] << "\n";
	}
                                                 // String storage is released at the end of this scope
}