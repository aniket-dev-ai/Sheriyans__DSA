class Solution {
public:
    int countAsterisks(string s) {
        int c = 0;
        int p = 0;
        for(int i = 0 ; i<s.length();i++){
            if(c==0 && s[i]=='|'){
                c = 1;
                continue;
            }else if(c==1 && s[i]== '|' ){
                c=0;
            }

            if(c==0){
                if(s[i] == '*'){
                    p++;
                }
            }
        }
        return p;
    }
};