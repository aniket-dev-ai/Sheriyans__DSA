class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    vector<int> n;
    for (int i = 0; i < nums.size(); i++) {
        if (i == 0) {
            n.push_back(nums[i]);
        } else if (find(n.begin(), n.end(), nums[i]) == n.end()) {
            n.push_back(nums[i]);
        }
    }
    swap(n,nums);
    return nums.size();
    }
};