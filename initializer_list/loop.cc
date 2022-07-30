#include <iostream>
#include <initializer_list>

using namespace std;

void announce(initializer_list<string> stations) {
    cout << "This train will stop at: ";
    for (auto station: stations)
        cout << station << ", ";
}

int main() {
	cout << "This is a fast train to London Waterloo.\n";
	announce({"London Waterloo only"});
	cout << "\n\n";
	cout << "This is a stopping service to London Waterloo.\n";
	announce( {"Clapham Junction", "Vauxhall", "London Waterloo"} );
}