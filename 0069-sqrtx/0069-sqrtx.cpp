class Solution {
public:
    int mySqrt(int x) {
         if (x == 0 || x == 1) return x;

    int start = 0, end = x;
    while (start <= end) {
       long long  int mid = start + (end - start) / 2;
        long long int m = mid * mid;
        long long int m1 =( mid - 1) * ( mid - 1);
        long long int m2 = ( mid + 1) * ( mid + 1);
        if(m == x) return mid;
        if(m1<x && m > x) return mid -1;
        if(m2>x && m < x) return mid ;
        if(m < x ) start = mid+1;
        if(m > x ) end = mid -1 ;
    }
    return -1;
}
};