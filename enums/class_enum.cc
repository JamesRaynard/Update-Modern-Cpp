#include <iostream>

using namespace std;

enum class suits { clubs, diamonds, hearts, spades };
enum class face_value { two = 2, three, /* ... */ king, ace };

int main() {
	//int i = suits::hearts;                                  // Error - cannot implicitly convert to int
	int i = static_cast<int>(suits::hearts);                // suit implicitly converted to int
	
	//...
	
	//if (i == face_value::two)                                       // Error - no match for operator ==
	if (i == static_cast<int>(face_value::two))             // face_value implicitly converted to int
		cout << "???\n";                  // This shouldn't be possible!
}