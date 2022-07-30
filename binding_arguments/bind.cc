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
	auto match_two = bind(match, _1, "two");                  // Captures "two" as second argument

	vector<string> texts = {"one", "two", "three", "two", "four", "two", "three"};

	cout << "The vector contains ";
	cout << count_if(texts.begin(), texts.end(), match_two);  // text passed as first argument to match
	cout << " occurrences of the word \"two\"\n";
}