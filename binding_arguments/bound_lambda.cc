#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;
using namespace std::placeholders;

bool match(const string& text, const string& value) {
    return text == value;
}

int main() {
	vector<string> texts = {"one", "two", "three", "two", "four", "two", "three"};

	cout << "The vector contains ";
	cout << count_if(texts.begin(), texts.end(), 
						[value="two"](const string& text) {return match(text, value);}
	); 
	cout << R"( occurrences of the word "two")" << endl;
}