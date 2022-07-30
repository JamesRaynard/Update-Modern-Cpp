#include <map>
#include <string>
#include <iostream>

using namespace std;

void print(const map<string, int>& scores) {
	cout << "Map elements: " << endl;
	map<string, int>::const_iterator it;
	for (it = scores.begin(); it != scores.end(); ++it)
		cout << it->first << " has a score of " << it->second << endl;
	cout << endl;
}

int main() {
	map<string, int> scores;                                           // Create an instance of std::map
	scores.insert(make_pair<string, int>("Maybelline", 86));           // Add some elements to it
	scores.insert(make_pair<string, int>("Graham", 78));

	print(scores);
	
	cout << "Graham has a score of " << scores["Graham"] << endl;      // Fetches the value with key "Graham"
	print(scores);
	
	cout << "Setting Graham's score to 66" << endl;
	scores["Graham"] = 66;          // Changes the value of the element with key "Graham"
	print(scores);
	
	cout << "Adding Grace's score of 66" << endl;
	scores["Grace"] = 66;           // Creates a new element with key "Grace"
	print(scores);
	
	map<string, int>::const_iterator p = scores.find("Graham");
	if (p != scores.end())
		cout << "Found element with key " << p->first << ". It has value " << p->second << endl;
}