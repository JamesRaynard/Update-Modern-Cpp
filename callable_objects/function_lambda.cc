#include <iostream>
#include <string>
#include <vector>
#include <functional>

using namespace std;

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
	
	cout << "The vector contains ";
	cout << count_strings(texts,
		[](const string& test) { return test == "two";}
		);
	cout << R"( occurrences of the word "two")" << endl;
}