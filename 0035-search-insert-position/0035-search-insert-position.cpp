class Solution {
public:
    int searchInsert(vector<int>& n, int t) {
        int s = 0 , e = n.size()-1 ;
        while(s<=e){
            int m = s+(e-s)/2;
            if(n[m]==t){
                return m;
            }
            if(m==0 && n[m]<t) {
                return 1;
            }
            if(m==n.size()-1 && n[m]<t){
                return m+1;
            }
            if(n[m]>t && n[m-1]<t){
                return m;
            }
            if(n[m]<t && n[m+1]>t){
                return m+1;
            }
            if(n[m]<t){
                s = m+1;
            }
            if(n[m]>t){
                e=m-1;
            }
        }
return 1;
    }
};