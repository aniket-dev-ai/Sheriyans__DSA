class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int size = s.length();
        if(size != goal.length()) return false;
        for(int i = 0 ; i<size-1;i++){
            for(int j = i+1 ; j<size;j++){ 
                string p = s;
                swap(p[i],p[j]);
                if(p==goal){
                    return true;
                    }
            }
        }
        return false;
    }
};