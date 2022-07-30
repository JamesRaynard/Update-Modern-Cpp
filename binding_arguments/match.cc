#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool match(const string& text) {
    return text == "two";
}

int main() {
	vector<string> texts = {"one", "two", "three", "two", "four", "two", "three"};

	cout << "The vector contains ";
	cout << count_if(texts.begin(), texts.end(), match);
	cout << R"( occurrences of the word "two")" << endl;
}