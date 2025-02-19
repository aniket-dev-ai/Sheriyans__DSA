class Solution {
public:
    int sumByDivisor(vector<int>& nums, int divisor) {
        int sum = 0;
        for (int num : nums) {
            sum += ceil((double)num / divisor);
        }
        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int left = 1, right = *max_element(nums.begin(), nums.end());
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (sumByDivisor(nums, mid) > threshold)
                left = mid + 1;
            else
                right = mid;
        }
        return left;
    }
};