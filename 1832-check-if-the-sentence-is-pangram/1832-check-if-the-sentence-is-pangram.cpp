class Solution {
public:
    bool checkIfPangram(string sentence) {
        char ab ='a';
        for(ab ; ab<='z' ; ab++){
            if(sentence.find(ab) == string::npos){
                return false;
            }
        }
        return true;
    }
};