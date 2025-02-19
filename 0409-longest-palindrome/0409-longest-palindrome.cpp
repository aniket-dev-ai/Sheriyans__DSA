class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> freq;
        int length = 0;
        bool hasOdd = false;
        
        for (char ch : s) {
            freq[ch]++;
        }

        for (auto it : freq) {
            if (it.second % 2 == 0) {
                length += it.second;
            } else {
                length += it.second - 1;
                hasOdd = true;
            }
        }

        return hasOdd ? length + 1 : length;
    }
};
