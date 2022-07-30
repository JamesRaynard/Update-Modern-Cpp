#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> vec = {3, 1, 4, 1, 5, 9};
	
	// Sort the data, passing an instance of the functor as the predicate
	auto n_odd = count_if(vec.begin(), vec.end(),
							[](int n) -> bool {
										if (n % 2 == 1)
											return true;
										else
											return false;
									  }
						);

	cout << "The vector contains " << n_odd << " elements with odd values\n";
}