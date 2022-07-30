#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<string> words;
	string s;
	
	cout << "Please type in some words, separated by spaces" << endl;
	
	while (cin >> s && s != "stop") {
		words.push_back(s);
	}
	
	sort(words.begin(), words.end());                          // Sort the words in alphabetical order
	
	cout << "Your words in alphabetical order: " << endl;
	
	vector<string>::iterator it;
	for (it = words.begin(); it != words.end(); ++it)
		cout << *it << ", ";
}