class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         set<int>s(nums.begin(),nums.end());
        vector<int>v(s.begin(),s.end());
        nums=v;
        return nums.size();
    }
};