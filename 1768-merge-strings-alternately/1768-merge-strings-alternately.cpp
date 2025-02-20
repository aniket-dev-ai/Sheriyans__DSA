class Solution {
public:
    string mergeAlternately(string word1, string word2) {
    int size = (word1.length()>word2.length()?word2.length():word1.length());
    int size2 = (word1.length()>word2.length()?word1.length():word2.length());
    string c ="";
    for(int i = 0;i<size2;i++){
        if(i>(size-1)){
            c.push_back((word1.length()>word2.length()?word1[i]:word2[i]));
        }else{
            c.push_back(word1[i]);
            c.push_back(word2[i]);
        }
    }
    return c;
    }
};