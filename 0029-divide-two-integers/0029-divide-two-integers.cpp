class Solution {
public:
    int divide(int d, int di) {
        long long t = d;
        long long y = di;
        if(t < 0 && y >0) return -1 * abs(t/y);
        if(t > 0 && y <0) return -1 * abs(t/y);
         long long ans = abs(t/y);
         if(ans<INT_MIN){
         return ans+1;
         }if(ans>INT_MAX){
            return ans-1;
         }
         return ans;
    }
};