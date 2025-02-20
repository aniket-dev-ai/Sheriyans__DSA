class Solution {
public:
    bool isPerfectSquare(int n) {
        int s = 0 , e = n/2;
        while(s<=e){
            long long int m = s + (e-s)/2;
            if(m*m == n) return true;
            if(m*m > n) e = m - 1;
            else s = m +1;
        }
        return false;
    }
};