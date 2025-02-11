class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==1){
            if(nums[0]==target){
                return 0;
            }else{
                return -1;
            }
        }
        int start= 0 , e = nums.size()-1;
        int mid = start+(e-start)/2;
        while(start!=e){
            if(nums[mid]==target) return mid;
            if(nums[mid]>target){
                e = mid-1;
            }
            if(nums[mid]<target){
                start=mid+1;
            }
mid = start+(e-start)/2;
        }
    return -1;
    }
};