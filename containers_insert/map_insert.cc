#include <iostream>
#include <map>

using namespace std;

int main() {
	map<string, int> scores;                                           
	scores.insert(make_pair("Maybelline", 86));          // C++03 requires make_pair()
	scores.insert( {"Graham", 78} );                     // C++11 allows initializer_list

	cout << "Map elements:" << endl;
	for (auto it: scores) {                                                     // Use a range-for loop 
		cout << it.first << " has a score of " << it.second << endl;
	}
}