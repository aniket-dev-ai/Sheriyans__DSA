#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& n1, vector<int>& n2) {
        unordered_map<int, int> freq;
        vector<int> result;

        for (int num : n1) {
            freq[num]++;
        }

        for (int num : n2) {
            if (freq[num] > 0) {
                result.push_back(num);
                freq[num]--;
            }
        }

        return result;
    }
};
