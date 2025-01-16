class Solution {
public:
    int robHelper(vector<int>& nums, int i, vector<int>& dp) {
        if (i >= nums.size()) return 0; 
        if (dp[i] != -1) return dp[i];
        
        int include = nums[i] + robHelper(nums, i + 2, dp); // Rob current house
        int exclude = robHelper(nums, i + 1, dp);          // Skip current house
        
        return dp[i] = max(include, exclude);
    }

    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return robHelper(nums, 0, dp);
    }
};
