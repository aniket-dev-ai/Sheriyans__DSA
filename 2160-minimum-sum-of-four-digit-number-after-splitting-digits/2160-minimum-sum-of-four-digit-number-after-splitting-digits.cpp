class Solution {
public:
 
    int minimumSum(int num) {
     vector<int> nums;
     int n = num;
     while(n>0){
        nums.push_back(n%10);
        n = n/10;
     }
     sort(nums.begin(),nums.end());
     return ((nums[0]*10)+nums[2])+((nums[1]*10)+nums[3]);
    }
};