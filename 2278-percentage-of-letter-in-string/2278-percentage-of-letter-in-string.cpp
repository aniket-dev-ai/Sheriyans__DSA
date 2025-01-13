class Solution {
public:
    int percentageLetter(string s, char letter) {
        int size = s.length();
        int c = 0;
        for(int i = 0 ; i<size;i++){
            if(s[i]==letter){
                c++;
            }
        }
        return ((c*100/size));
    }
};