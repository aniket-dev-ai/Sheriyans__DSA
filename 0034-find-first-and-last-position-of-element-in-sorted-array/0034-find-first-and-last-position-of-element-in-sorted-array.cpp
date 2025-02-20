class Solution {
public:
    int firstOccurance(vector<int>& n, int target) {
        int a = -1, s = 0, e = n.size() - 1;
        while (s <= e) {
            int m = s + (e - s) / 2;
            if (n[m] == target) {
                a = m;
                e = m - 1;
            } else if (n[m] < target) {
                s = m + 1;
            } else {
                e = m - 1;
            }
        }
        return a;
    }

    int lastOccurance(vector<int>& n, int target) {
        int a = -1, s = 0, e = n.size() - 1;
        while (s <= e) {
            int m = s + (e - s) / 2;
            if (n[m] == target) {
                a = m;
                s = m + 1;
            } else if (n[m] < target) {
                s = m + 1;
            } else {
                e = m - 1;
            }
        }
        return a;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        return {firstOccurance(nums, target), lastOccurance(nums, target)};
    }
};
