class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int i = 0 , j = 0 , maxLen = 0;

        while(j<s.length()){
            if(seen.find(s[j])==seen.end()){
                seen.insert(s[j]);
                maxLen = max(maxLen , j-i+1);
                j++;
            }else{
                seen.erase(s[i]);
                i++;
            }
        }
        return maxLen;
        }
};