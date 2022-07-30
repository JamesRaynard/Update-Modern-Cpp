#include <iostream>

using namespace std;

class refrigerator {
    // Data members
    int temperature;
    bool door_open;
    bool power_on;
	public:
	refrigerator(int temp, bool open, bool power) : temperature(temp), door_open(open), power_on(power) {
		cout << "Refrigerator constructor\n";
	}
};

class super_fridge : public refrigerator {
	public:
	//super_fridge(int temp, bool open, bool power) : refrigerator(temp, open, power) {}
	using refrigerator::refrigerator;
};

int main() {
	super_fridge super(4, false, true);
}