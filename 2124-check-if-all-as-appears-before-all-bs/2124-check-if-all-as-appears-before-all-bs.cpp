class Solution {
public:
    bool checkString(string s) {
        if(s.length()<2){
            return true;
        }
        if(s.find('b')==string::npos){
            return true;
        }
        int c = 0;
        for(int i = 0 ; i<s.length();i++){
            if(s[i]=='b'){
                c = i;
                break;
            }
        }
        for(int i = c; i<s.length();i++){
            if(s[i]=='a'){
                return false;
                break;
            }
        }
        return true;
    }
};