class Solution {
public:
    int mySqrt(int x) {
        if (x== 0 || x == 1) return x;
        for(int i = 1 ; i<=x;i++){
            if((i*i)==x || (i*i)<=x){
                return i;
                break;
            }
        }
        return 0;
    }
};