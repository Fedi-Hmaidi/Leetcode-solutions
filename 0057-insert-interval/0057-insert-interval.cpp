class Solution {
public:
    static bool isOverlapping(const vector<int>& nums1, const vector<int>& nums2) {
        if (!(nums1[1] < nums2[0] || nums2[1] < nums1[0])) {
             return true;
        }
        return false;
    }
    
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;
        int i=0;
        while(i<intervals.size() && intervals[i][1] < newInterval[0]){
            res.push_back(intervals[i]);
            i++;
        }
        while(i<intervals.size() && isOverlapping(intervals[i], newInterval)){
            newInterval[0] = min(newInterval[0], intervals[i][0]);
            newInterval[1] = max(newInterval[1], intervals[i][1]);
            i++;
        }
        res.push_back(newInterval);
        while(i < intervals.size()){
            res.push_back(intervals[i]);
            i++;
        }
        return res;
    }
};