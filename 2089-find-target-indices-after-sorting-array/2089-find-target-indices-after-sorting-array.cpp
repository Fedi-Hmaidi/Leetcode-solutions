class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int>res;
        int start = lower_bound(nums.begin(), nums.end(), target)-nums.begin();
        int end = upper_bound(nums.begin(), nums.end(), target)-nums.begin();
        for(int i=start; i<end; i++) res.push_back(i);
        return res;
    }
};