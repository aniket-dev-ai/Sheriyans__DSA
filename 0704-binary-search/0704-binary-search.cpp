class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0;
        int e = n-1;
        int m = (e+s)/2;
        while(s<=e){
            if(nums[m]==target) return m;
            if(nums[m]>target) e = m-1;
            if(nums[m]<target) s= m+1;
            m = (e+s)/2;
        }
        return -1;
    }
};