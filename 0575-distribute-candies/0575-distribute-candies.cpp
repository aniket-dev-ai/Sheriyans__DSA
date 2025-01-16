#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> uniqueCandies; 
        
        for (int c : candyType) {
            uniqueCandies.insert(c);
        }

        int maxCandies = candyType.size() / 2;  
        return min((int)uniqueCandies.size(), maxCandies);  
    }
};
