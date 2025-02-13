class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend < 0 && divisor >0) return -1 * abs(dividend/divisor);
        if(dividend > 0 && divisor <0) return -1 * abs(dividend/divisor);
        return abs(dividend/divisor);
    }
};