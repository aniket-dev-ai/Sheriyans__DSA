class Solution {
public:
bool zero(vector<int)& nums){
     int size = nums.size();
        for(int i = 0 ; i < size;i++){
            if(nums[i] != 0){
                return false;
            }
        }
        return true;
}
void subs(vector<int) &nums , int min){
 int size = nums.size();
        
}
int min(vector<int)& a){
 int size = nums.size();
        
}
    int minimumOperations(vector<int>& nums) {
     int size = nums.size();
        
        while(zero(nums) == 0){
            int minimum = min(nums);
            subs(nums , minimum);
        }
    }
};