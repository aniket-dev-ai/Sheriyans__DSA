#include <iostream>
#include <vector>
using namespace std;

int findMinValueToBalance(vector<int>& nums) {
    int n = nums.size();
    int leftSum = 0, rightSum = 0;

    for (int i = 0; i < n / 2; i++) {
        leftSum += nums[i];
    }
    for (int i = n / 2; i < n; i++) {
        rightSum += nums[i];
    }

    return abs(leftSum - rightSum);
}

int main() {
    vector<int> nums1 = {1, 3, 1, 2, 4, 3};
    cout << "Minimum value to balance: " << findMinValueToBalance(nums1) << endl;

    vector<int> nums2 = {1, 2, 1, 2, 1, 3};
    cout << "Minimum value to balance: " << findMinValueToBalance(nums2) << endl;

    return 0;
}
