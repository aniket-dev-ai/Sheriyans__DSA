class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) return INT_MAX; // Handle overflow case

        long long dvd = abs((long long)dividend), dvs = abs((long long)divisor);
        long long result = 0, sign = (dividend > 0) ^ (divisor > 0) ? -1 : 1;

        while (dvd >= dvs) {
            long long temp = dvs, multiple = 1;
            while (dvd >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }
            dvd -= temp;
            result += multiple;
        }
        return sign * result;
    }
};
