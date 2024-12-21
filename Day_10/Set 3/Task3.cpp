#include <iostream>
#include <vector>
#include <set>
using namespace std;

int thirdMax(vector<int>& nums) {
    set<int> distinctNums(nums.begin(), nums.end());
    if (distinctNums.size() < 3) {
        return *distinctNums.rbegin();
    }
    auto it = distinctNums.rbegin();
    advance(it, 2);
    return *it;
}

int main() {
    vector<int> nums = {3, 2, 1};
    cout << "Sample Input: 1" << endl;
    cout << "Sample Output: " << thirdMax(nums) << endl;

    nums = {2, 1};
    cout << "Sample Input: 2" << endl;
    cout << "Sample Output: " << thirdMax(nums) << endl;

    return 0;
}

