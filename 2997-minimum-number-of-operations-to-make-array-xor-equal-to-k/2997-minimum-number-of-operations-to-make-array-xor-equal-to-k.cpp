class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int r=0;
        for(auto &u:nums) r^=u;
        return __builtin_popcount(r^k);
    }
};