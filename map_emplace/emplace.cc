#include <iostream>
#include <vector>

class refrigerator {
	// Data members
	int temperature;
	bool door_open;
	bool power_on;
public:
	refrigerator(int temp, bool open, bool power)
		: temperature(temp), door_open(open), power_on(power) 
	{
		std::cout << "Constructor called\n";
	}
	refrigerator(const refrigerator& other)
		: temperature(other.temperature),
		door_open(other.door_open),
		power_on(other.power_on)
	{
		std::cout << "Copy constructor called\n";
	}
	void print() const
	{
		std::cout << "Temperature = " << temperature;
		std::cout << std::boolalpha;
		std::cout << ", door_open = " << door_open;
		std::cout << ", power_on = " << power_on;
	}
};

int main()
{
	std::vector<refrigerator> vec;

	refrigerator fridge(2, false, true);                  // Create a refrigerator object
	vec.insert(vec.begin(), fridge);                      // Add an element and copy fridge into it

	std::cout << "Calling emplace\n";
	vec.emplace(vec.end(), 5, false, false);              // Add an element and create an object in it

	std::cout << "Vector elements:\n";
	for (const auto& el : vec) {
		el.print();
		std::cout << "\n";
	}
}
