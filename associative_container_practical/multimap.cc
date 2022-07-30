#include <map>
#include <string>
#include <iostream>

using namespace std;

void print(const multimap<string, int>& scores) {
	cout << "Map elements: " << endl;
	multimap<string, int>::const_iterator it;
	for (it = scores.begin(); it != scores.end(); ++it)
		cout << it->first << " has a score of " << it->second << endl;
	cout << endl;
}

int main() {
	multimap<string, int> scores;                              // Create an instance of std::multimap
	scores.insert(make_pair<string, int>("Graham", 78));       // Add some elements to it
	scores.insert(make_pair<string, int>("Grace", 66));
	scores.insert(make_pair<string, int>("Graham", 66));       // Add duplicate elements
	scores.insert(make_pair<string, int>("Graham", 72));
	scores.insert(make_pair<string, int>("Hareesh", 77));

	print(scores);
	
	cout << "Removing all Graham's scores" << endl;
	scores.erase("Graham");                                    // Remove all elements with key "Graham"
	print(scores);
}