#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Define a predicate function
bool is_shorter (const string& lhs, const string& rhs) {
    return lhs.size() < rhs.size();
 }

int main() {
	vector<string> words;
	words.push_back("a");
	words.push_back("collection");
	words.push_back("of");
	words.push_back("words");
	words.push_back("with");
	words.push_back("varying");
	words.push_back("lengths");
	
	// Sort the data in alphabetical order
	sort(words.begin(), words.end());
	
	cout << "Sorted alphabetically:" << endl;
	vector<string>::iterator it;
	for (it = words.begin(); it != words.end(); ++it)
		cout << *it << ", ";
	cout << endl;
	
	// Sort the data, passing the function pointer as the predicate
	sort(words.begin(), words.end(), is_shorter);
	
	cout << endl << "Sorted by length:" << endl;
	for (it = words.begin(); it != words.end(); ++it)
		cout << *it << ", ";
	cout << endl;
}