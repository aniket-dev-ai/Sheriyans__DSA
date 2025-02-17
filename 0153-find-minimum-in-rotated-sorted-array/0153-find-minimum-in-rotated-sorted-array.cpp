class Solution {
public:
    int findMin(vector<int>& n) {
        if(n.size()==1) return n[0];
        // if(n[n.size()-1] == 1) return 1;
      long long  int s = 0, e = n.size() - 1;
        while (s <= e) {
          long long  int m = s + (e - s) / 2;
            if(m==0 && n[m+1]<n[m]) return n[m+1];
            if (m < n.size()-1  && m > 0  && n[m] < n[m + 1] &&
                n[m] < n[m - 1]) {
                return n[m];
            }
            if (n[0] < n[m]) {
                s = m + 1;
            } else {
                e = m - 1;
            }
        }
        return n[0];
    }
};