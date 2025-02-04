class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
         int size = nums.size();
         vector <int> ans;

         for(int i = 0;i<size;i++){
            int c = 0;
            for(int j = 0;j<size;j++){
                if(nums[i]>nums[j]){
                    c++;
                }
                 
            }
            ans.push_back(c);
         }
         return ans;
    }

};