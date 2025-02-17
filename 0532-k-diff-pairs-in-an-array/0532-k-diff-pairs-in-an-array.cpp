class Solution {
public:
    bool bs(vector<int>& n, int s, int x) {
        int e = n.size() - 1;
        while (s <= e) {
            int m = s + (e - s) / 2;
            if (n[m] == x)
                return true;
            if (n[m] > x)
                e = m - 1;
            else
                s = m + 1;
        }
        return false;
    }

    int findPairs(vector<int>& n, int k) {
        sort(n.begin(), n.end());
        set<pair<int, int>> ans;

        for (int i = 0; i < n.size(); i++) {
            if (bs(n, i + 1, n[i] + k)) {
                ans.insert({n[i], n[i] + k});
            }
        }
        return ans.size();
    }
};