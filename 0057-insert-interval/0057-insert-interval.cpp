class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals,
                               vector<int>& newInterval) {
        int n = intervals.size();
    vector<vector<int>> res;
    int i = 0;

    // Add all intervals that come before the new interval
    while (i < n && intervals[i][1] < newInterval[0]) {
        res.push_back(intervals[i]);
        i++;
    }

    // Merge overlapping intervals with the new interval
    while (i < n && intervals[i][0] <= newInterval[1]) {
        newInterval[0] = min(intervals[i][0], newInterval[0]);
        newInterval[1] = max(intervals[i][1], newInterval[1]);
        i++;
    }
    res.push_back(newInterval);

    // Add all intervals that come after the new interval
    while (i < n) {
        res.push_back(intervals[i]);
        i++;
    }

    return res;
    } 
};