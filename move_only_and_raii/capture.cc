#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	vector<string> strings(5);

	cout << "Capture by reference" << endl;
	
	[&strings]() { cout << "Count in lambda = " << strings.size() << endl; }();
	
	cout << endl << "After calling lambda, count = " << strings.size() << endl;

	cout << endl << "Capture by move" << endl;
	
	[vs = std::move(strings)]() { cout << "Count in lambda = " << vs.size() << endl; }();
	
	cout << endl << "After calling lambda, count = " << strings.size() << endl << endl;
}