class Solution {
public:
    int singleNonDuplicate(vector<int>& n) {
     int s = 0   , e = n.size()-1;
     while(s<e){
        int m = s+(e-s)/2;
        
        if(m%2==1){
            m--;
        }
        if(n[m]==n[m+1]){
            s = m+2;
        }else{
            e=m;
        }

     } 
    return n[s];
    }
};