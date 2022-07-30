#include <iostream>
#include <string>

using namespace std;

class Internet {
	public:
	void connect() { cout << "Connected to Internet" << endl; }
	void login(const string&id, const string& pw) { cout << "Logging in!" << endl; }
};

class refrigerator {
    // Data members
    int temperature{2};
    bool door_open{false};
    bool power_on{true};
	Internet internet;
public:
    /*
	refrigerator() { internet.connect(); internet.login("me", "secret"); }
	refrigerator(int temperature) : temperature(temperature) { internet.connect(); internet.login("me", "secret"); }
	refrigerator(const string& id, const string& pw) { internet.connect(); internet.login(id, pw); }
	refrigerator(int temperature, const string& id, const string& pw) : temperature(temperature) { internet.connect(); internet.login(id, pw); }
	*/
	refrigerator() : refrigerator(2, "me", "secret") {}
	refrigerator(int temperature) : refrigerator(temperature, "me", "secret") {}
	refrigerator(const string& id, const string& pw) : refrigerator(2, id, pw) {}
	refrigerator(int temperature, const string& id, const string& pw) : temperature(temperature) { internet.connect(); internet.login(id, pw); }
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