#include <iostream>
#include <map>
#include <string>

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
	std::map<std::string, refrigerator> fridges;

	refrigerator meat_fridge(2, false, true);               // Create a refrigerator object
	fridges.insert_or_assign("Meat fridge", meat_fridge);   // Add an element and copy fridge into it

	fridges.try_emplace("Dairy fridge", 5, false, false);    // Add an element and create an object in it

	std::cout << "Refrigerators:\n";
	for (const auto& [name, fridge] : fridges) {
		std::cout << name << ": ";
		fridge.print();
		std::cout << "\n";
	}
}
