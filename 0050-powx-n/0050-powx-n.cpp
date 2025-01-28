class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) return 1; // Base case: x^0 = 1
        if (x == 0) return 0; // Special case: 0^n = 0 for n > 0
        
        long long absN = abs((long long)n); // Handle negative n safely
        double result = 1.0;

        while (absN > 0) {
            if (absN % 2 == 1) { // If current power is odd
                result *= x;
            }
            x *= x; // Square the base
            absN /= 2; // Reduce power by half
        }

        return n < 0 ? 1 / result : result; // Handle negative exponents
    }
};
