#include <iostream>

using namespace std;

class refrigerator {
    // Data members
    /*int temperature{2};
    bool door_open{false};
    bool power_on{true};*/
	int temperature;
    bool door_open;
    bool power_on;
public:
	refrigerator() {}
	refrigerator(int temperature) : temperature(temperature) {}
	void print() {
		cout << "Temperature = " << temperature;
		cout << boolalpha;
		cout << ", door_open = " << door_open;
		cout << ", power_on = " << power_on;
	}
};

int main() {
	refrigerator fridge1;
	refrigerator fridge2(5);
	
	cout << "Fridge 1: " << endl;
	fridge1.print();
	
	cout << endl << "Fridge 2: " << endl;
	fridge2.print();
}