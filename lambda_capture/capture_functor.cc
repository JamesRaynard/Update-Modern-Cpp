#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class is_longer_than {
  private:
    const int n;
  public:
    is_longer_than(const int n) : n(n) {}

    bool operator () (const string& str) const {
        return str.size() > n;
    }
};

using namespace std;

int main() {
	vector<string> words{ "a", "collection", "of", "words", "with", "varying", "lengths" };

	int n{5};
	// Find the first element with more than 5 characters
	auto res = find_if(words.cbegin(), words.cend(), is_longer_than(n));

	// Display it
	if (res != words.end()) {
		cout << R"(The first word which is more than )" << n << R"( letters long is ")";
		cout << *res << R"(")" << endl;
	}
}