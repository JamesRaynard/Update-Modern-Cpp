#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

using namespace std;

int main() {
	vector<string> words{ "a", "collection", "of", "words", "with", "varying", "lengths" };

	int n{5}, idx{0};                                // Add another variable for the index of the match
	auto res = find_if(words.begin(), words.end(),
//					[n, idx] (const string& str) { ++idx; return str.size() > n; }              // Error!
					[n, idx] (const string& str) mutable { ++idx; return str.size() > n; }      // OK
	 );

	if (res != words.end()) {
		cout << R"(The first word which is more than )" << n << R"( letters long is ")";
		cout << *res << R"(")" << endl;
		cout << "The index is " << idx << endl;                // Always prints zero
	}
}