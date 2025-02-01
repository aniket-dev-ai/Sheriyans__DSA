using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> merged;
        
        // Iterating over all intervals
        for (int i = 0; i < intervals.size(); i++) {
            bool mergedFlag = false;
            // Compare with every other interval
            for (int j = 0; j < merged.size(); j++) {
                // If intervals overlap
                if (intervals[i][0] <= merged[j][1] && intervals[i][1] >= merged[j][0]) {
                    // Merge them by updating the end time
                    merged[j][0] = min(merged[j][0], intervals[i][0]);
                    merged[j][1] = max(merged[j][1], intervals[i][1]);
                    mergedFlag = true;
                    break;
                }
            }
            // If no merge was possible, add the interval as a new one
            if (!mergedFlag) {
                merged.push_back(intervals[i]);
            }
        }
        
        return merged;
    }
};

