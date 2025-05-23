class Solution {
public:
    void Merge(vector<int>& v, vector<int>& temp, int start, int mid, int end) {
        int i = start, j = mid + 1, k = start;
        while (i <= mid && j <= end) {
            if (v[i] <= v[j]) temp[k++] = v[i++];
            else temp[k++] = v[j++];
        }
        while (i <= mid) temp[k++] = v[i++];
        while (j <= end) temp[k++] = v[j++];

        for (int i = start; i <= end; i++) v[i] = temp[i]; 
    }

    void mergeSort(vector<int>& v, vector<int>& temp, int start, int end) {
        if (start >= end) return;
        int mid = start + (end - start) / 2;
        mergeSort(v, temp, start, mid);
        mergeSort(v, temp, mid + 1, end);
        Merge(v, temp, start, mid, end);
    }

    vector<int> sortArray(vector<int>& nums) {
        vector<int> temp(nums.size(), 0);
        mergeSort(nums, temp, 0, nums.size() - 1);
        return nums;
    }
};
