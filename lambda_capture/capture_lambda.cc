#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

using namespace std;

int main() {
	vector<string> words{ "a", "collection", "of", "words", "with", "varying", "lengths" };

	int n{5};
	// Find the first element with more than 5 characters
	auto res = find_if(words.cbegin(), words.cend(), 
				[n] (const string& str) { return str.size() > n; }         // Lambda captures local variable n
	);

	// Display it
	cout << R"(The first word which is more than )" << n << R"( letters long is ")";
		cout << *res << R"(")" << endl;
}