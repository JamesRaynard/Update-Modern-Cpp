#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Define a functor for the predicate
class is_odd {
public:
   bool operator () (const int n) const { return (n % 2 == 1); }
};

int main() {
	vector<int> vec {3, 1, 4, 1, 5, 9};

	cout << "Original vector: ";
	for (auto v : vec)
		cout << v << ", ";

	auto n_odd = count_if(vec.cbegin(), vec.cend(), is_odd());

	cout << "\nNumber of odd elements: " << n_odd << endl;	

}