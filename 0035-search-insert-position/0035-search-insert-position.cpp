class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        int indx = std::upper_bound(nums.begin(), nums.end(), target) - nums.begin();
        if (indx > 0 && nums[indx - 1] == target)
            return indx - 1;
        return indx;
    }
};