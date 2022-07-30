#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class is_longer_than {
  private:
    const int n;
	int& idx;
  public:
    is_longer_than(const int n, int& idx) : n(n), idx(idx) {}

    bool operator () (const string& str) const {
        ++idx; return str.size() > n;
    }
};

int main() {
	vector<string> words{ "a", "collection", "of", "words", "with", "varying", "lengths" };

	int max{5}, idx{-1};
	// Find the first element with more than 5 characters
	// [max, &idx] (const string& str) { ++idx; return str.size() > max; } 
	auto res = find_if(words.cbegin(), words.cend(), is_longer_than(max, idx));

	// Display it
	if (res != words.end()) {
		cout << R"(The first word which is more than )" << max << R"( letters long is ")";
		cout << *res << R"(")" << endl;
		cout << "The index is " << idx << endl;
	}
}