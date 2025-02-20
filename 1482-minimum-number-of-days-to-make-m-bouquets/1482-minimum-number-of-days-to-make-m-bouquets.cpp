class Solution {
public:
    bool can(vector<int>& b, int m, int k, int d) {
        int c = 0;
        for (int i = 0; i < b.size(); i++) {
            if (b[i] <= d) {
                c++;
            }
            if (c == k) {
                m--;
                c = 0;
                if (m == 0)
                    break;
            }
            if (b[i] > d) {
                c = 0;
            }
        }
        return m==0;
    }
    int minDays(vector<int>& b, int m, int k) {
        long long m1 = m , k1 = k;
        if (b.size() < m1 * k1)
            return -1;

        int s = *min_element(b.begin(), b.end());
        int e = *max_element(b.begin(), b.end());

        int ans;
        while (s <= e) {
            int mi = s + (e - s) / 2;
            int d = mi;
            if (can(b, m, k, d)) {
                ans = mi;
                e = mi - 1;
            } else {
                s = mi + 1;
            }
        }
        return ans;
    }
};