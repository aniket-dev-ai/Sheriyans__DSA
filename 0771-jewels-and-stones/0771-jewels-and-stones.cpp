class Solution {
public:

    int count(string stones ,int a ,  char c){
        for (int i = 0 ; i<=stones.length()-1;i++){
            if(stones[i] == c){
                a++;
            }
        }
        return a;
    }

    int numJewelsInStones(string jewels, string stones) {
        int counts = 0;
        for(int i = 0;i<jewels.length();i++){
            char c = jewels[i];
            int cc = 0;
            int sum = count(stones , cc , c);
            counts = counts + sum;
        }
        return counts;
    }
};