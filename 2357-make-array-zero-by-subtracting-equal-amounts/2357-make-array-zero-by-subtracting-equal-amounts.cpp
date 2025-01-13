class Solution {
public:
bool zero(vector<int>& nums){
     int size = nums.size();
        for(int i = 0 ; i < size;i++){
            if(nums[i] != 0){
                return false;
            }
        }
        return true;
}
void subs(vector<int> &nums , int min){
 int size = nums.size();
         for(int i = 0 ; i < size;i++){
            if(nums[i]>=min){
                nums[i] = nums[i]-min;
            }
         }
}
int min(vector<int>& nums){
 int size = nums.size();
 int mini = nums[0];
  for(int i = 0 ; i < size;i++){
    if(nums[i]==0){continue;}
    if(mini == 0 || mini>nums[i]){
        mini = nums[i];
    }
  }
        return mini;
}
    int minimumOperations(vector<int>& nums) {
     int size = nums.size();
        int count =0;
        while(zero(nums) == 0){
            int minimum = min(nums);
            subs(nums , minimum);
            count++;
        }
        return count;
    }
};