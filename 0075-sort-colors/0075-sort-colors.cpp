class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> a, b, c;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) a.push_back(nums[i]);
            if(nums[i] == 1) b.push_back(nums[i]);
            if(nums[i] == 2) c.push_back(nums[i]);
        }

        int i = 0;
        for(; i < a.size(); i++) {
            nums[i] = a[i];
        }

        for(int j = 0; j < b.size(); j++) {
            nums[i++] = b[j];
        }

        for(int k = 0; k < c.size(); k++) {
            nums[i++] = c[k];
        }
    }
};
