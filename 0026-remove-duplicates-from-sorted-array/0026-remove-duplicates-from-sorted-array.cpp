class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int c = 0;
        for(int i = 0;i<nums.size()-1;i++){
            for(int j = i+1; j<nums.size();j++){
                c++;
                if(nums[i]==nums[j]){
                    c--;
                }
            }
        }
        for(int i = 0;i<c;i++){
            
        }
    }
};