#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& n1, vector<int>& n2) {
        set<int> s1(n1.begin(), n1.end());
        set<int> s2(n2.begin(), n2.end());
        vector<int> result;

        for (int num : s1) {
            if (s2.count(num)) {
                result.push_back(num);
            }
        }
        return result;
    }
};
