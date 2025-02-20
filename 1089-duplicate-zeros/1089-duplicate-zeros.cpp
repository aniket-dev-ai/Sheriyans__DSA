class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int size = arr.size();
        int count = 0; // Zero count ke basis par shifting calculate karenge
        int i = 0, j = 0;

        // Count effective new length after duplicating zeros
        for (; j < size; j++) {
            if (arr[j] == 0) count++;
        }

        j = size - 1; // End se traverse karenge
        int newLength = size + count;

        // Reverse traverse and shift elements
        for (i = newLength - 1; j >= 0; j--) {
            if (arr[j] == 0) {
                if (i < size) arr[i] = 0;
                i--;
            }
            if (i < size) arr[i] = arr[j];
            i--;
        }
    }
};
