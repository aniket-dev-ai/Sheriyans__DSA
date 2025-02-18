class Solution {
public:
    int findMin(vector<int>& n) {
        // if(n.size()==1) return n[0];
        // if(n.size()>1&&n[n.size()-1]<n[n.size()-2]){
        //     return n[n.size()-1];
        // } 
         int s = 0, e = n.size() - 1;
        while (s < e) {
           int m = s + (e - s) / 2;
            // if(m==0 && n[m+1]<n[m]) return n[m+1];
            // if (m < n.size()-1  && m > 0  && n[m] < n[m + 1] &&
            //     n[m] < n[m - 1]) {
            //     return n[m];
            // }
            if (n[m] > n[e]) {
                s = m + 1;
            } else {
                e = m;
            }
        }
        return n[s];
    }
};