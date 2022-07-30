#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vec {3, 1, 4, 1, 5, 9};

    auto n_odd = count_if(vec.cbegin(), vec.cend(), 
        [] (const int n) {								// Lambda expression with one argument
							return (n % 2 == 1); 		// Return type deduced as bool
						 }
        );
    cout << "Number of odd elements: " << n_odd << endl;
}