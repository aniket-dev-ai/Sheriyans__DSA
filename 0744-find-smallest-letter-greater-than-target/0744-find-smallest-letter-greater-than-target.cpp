class Solution {
public:
 vector<int> convert(vector<char>& l){
    vector<int> a;
    for(int i = 0 ; i<l.size();i++){
        int ia = (int)l[i];
        a.push_back(ia); 
    }
    return a;
 }

    char nextGreatestLetter(vector<char>& li, char t) {
        vector<int> l = convert(li);
        if((int)t > l[l.size() - 1]) {
            return li[0];
        }
        int s = 0, e = l.size() - 1;
        int m = s + (e - s) / 2;
        while (s <= e) {
            if (l[m] > (int)t) {
                e = m - 1;
            } else {
                s = m + 1;
            }
            m = s + (e - s) / 2;
        }
        return li[s%li.size()];
    }
};