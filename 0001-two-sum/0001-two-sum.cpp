class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        unordered_map<int, int> map;
        vector<int> ans;
        for(int i = 0; i < n.size(); i++) {
            int complement = t - n[i];
            if(map.find(complement) != map.end()) {
                return {map[complement], i};
            }
            map[n[i]] = i;
        }
        return {};
    }
};
