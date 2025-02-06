#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for(int a : nums) {
            s.insert(a);  // Insert elements into unordered set
        }

        int maxLength = 0;

        for (int a : s) {  // Iterate over set elements
            // Check if it's the start of a sequence
            if (s.find(a - 1) == s.end()) {
                int currentNum = a;
                int currentLength = 1;

                // Count the consecutive numbers starting from 'a'
                while (s.find(currentNum + 1) != s.end()) {
                    currentNum++;
                    currentLength++;
                }

                maxLength = max(maxLength, currentLength);
            }
        }

        return maxLength;
    }
};
