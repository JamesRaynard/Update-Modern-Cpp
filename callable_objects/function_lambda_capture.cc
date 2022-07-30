#include <iostream>
#include <string>
#include <vector>
#include <functional>

using namespace std;
using namespace std::placeholders;

bool match(const string& text, const string& value) {
    return text == value;
}

int count_strings(vector<string> &texts, function<bool(const string&)> match_ptr) {
    int tally = 0;
    for(auto text : texts) {
        if(match_ptr(text)) {
            ++tally;
        }
    }

    return tally;
}

int main() {
	vector<string> texts = {"one", "two", "three", "two", "four", "two", "three"};

	auto match_two = bind(match, _1, "two");
	cout << "The vector contains ";
	cout << count_strings(texts, 
		[value="two"](const string& text) {return match(text, value);}
	);
	cout << R"( occurrences of the word "two")" << endl;
}