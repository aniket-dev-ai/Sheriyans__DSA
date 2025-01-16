#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int duplicate = -1, missing = -1;
        vector<int> freq(n + 1, 0);
 
        for (int num : nums) {
            freq[num]++;
        }
 
        for (int i = 1; i <= n; i++) {
            if (freq[i] == 2) duplicate = i;
            if (freq[i] == 0) missing = i;
        }

        return {duplicate, missing};
    }
};
