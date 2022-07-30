#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main() {
	unordered_map<string, int> scores;
	scores.insert( {"Graham", 78} );
	scores.insert( {"Grace", 66} );
	scores.insert( {"Hareesh", 77} );

	cout << "Unordered map" << endl;
	for (auto score: scores) 
		cout << score.first << " has a score of " << score.second << endl;
	
	map<string, int> sorted_scores;                         // Create an ordered map
	
	// As we populate sorted_scores with the elements, it will automatically sort them
	copy(scores.begin(), scores.end(), 
         inserter(sorted_scores, sorted_scores.end()));      // Copy into the ordered map

	cout << endl << "std::map" << endl;
	for (auto score: sorted_scores) 
		cout << score.first << " has a score of " << score.second << endl;
}