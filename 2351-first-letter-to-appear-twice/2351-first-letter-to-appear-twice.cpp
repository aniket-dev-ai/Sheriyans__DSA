class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char> seen;

        for (char c : s) {
            if (seen.count(c)) {
                return c;  // Return the first repeated character
            }
            seen.insert(c);
        }

        return ' ';  // In case no character repeats
    }
};
