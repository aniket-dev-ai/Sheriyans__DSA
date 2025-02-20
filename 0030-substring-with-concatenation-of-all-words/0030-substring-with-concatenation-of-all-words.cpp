class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> result;
        if (words.empty()) return result;

        int wordLen = words[0].size();
        int numWords = words.size();
        int totalLen = wordLen * numWords;
        
        unordered_map<string, int> wordMap;
        for (string word : words) {
            wordMap[word]++;
        }

        for (int i = 0; i < wordLen; i++) {  
            int left = i, right = i, count = 0;
            unordered_map<string, int> seen;
            
            while (right + wordLen <= s.size()) {
                string w = s.substr(right, wordLen);
                right += wordLen;
                
                if (wordMap.find(w) != wordMap.end()) {
                    seen[w]++;
                    count++;
                    
                    while (seen[w] > wordMap[w]) {  
                        string leftWord = s.substr(left, wordLen);
                        seen[leftWord]--;
                        count--;
                        left += wordLen;
                    }
                    
                    if (count == numWords) result.push_back(left);
                } else {  
                    seen.clear();
                    count = 0;
                    left = right;
                }
            }
        }
        return result;
    }
};
