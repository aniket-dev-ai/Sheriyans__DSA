class Solution {
public:

    bool canFinish(vector<int>& p, int h,int k){
        int hrs = 0;
        for(int i = 0 ; i<p.size();i++){
            hrs+=ceil(p[i]/(double)k);
        }
        return hrs<=h;
    }

    int minEatingSpeed(vector<int>& p, int h) {
     int s = 1;
     int e = *max_element(p.begin(),p.end());
     int ans;
     while(s<=e){
        int m = s+(e-s)/2;
        int k = m;
        if(canFinish(p,h,k)){
            ans = k;
            e=m-1;
        }else{
            s=m+1;
        }
     }
     return ans;
    }
};