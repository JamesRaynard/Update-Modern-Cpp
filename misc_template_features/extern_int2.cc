#include <iostream>

using namespace std;

extern int meaning_of_life;   // Declare meaning_of_life

void func();

int main() {
	func();
	cout << meaning_of_life;
}
