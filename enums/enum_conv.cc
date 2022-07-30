#include <iostream>

using namespace std;

enum suits { clubs, diamonds, hearts, spades };
enum face_value { two = 2, three, /* ... , */ king, ace };

int main() {
	int i = hearts;                // suit implicitly converted to int
	//...
	if (i == two)                  // face_value implicitly converted to int
		cout << "???\n";           // This shouldn't be possible - but it is!
}