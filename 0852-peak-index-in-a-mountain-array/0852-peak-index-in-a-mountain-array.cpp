class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
     int n = nums.size();   
     int s = 0 ;
     int e = n-1;
     while(s<=e){
     int m = s+(e-s)/2;
        if(nums[m]>nums[m+1]&&nums[m]>nums[m-1]) return m;
        if(nums[m]>nums[m+1]) e = m-1;
        if(nums[m]<nums[m+1]) s = m+1;
     }
     return -1;
    }
};