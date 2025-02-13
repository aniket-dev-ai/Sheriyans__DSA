/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int s = 1 , e = n;
            int m = s+(e-s)/2;
        while(s<=e){
            int c = guess(m);
            if(c == 0) return m;
            if(c == -1) e = m - 1;
            if(c == 1)  s = m + 1;
            m = s+(e-s)/2;
        } 
    return m;
    }
};