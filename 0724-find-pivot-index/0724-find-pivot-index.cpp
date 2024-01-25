class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int lsum = 0;
        int sum = 0;
        for(auto x: nums){
            sum+=x;
        }
        for(int i=0; i<nums.size(); i++){
            int rsum = sum - lsum-nums[i];
            if(lsum == rsum){
                return i;
            }
            lsum+=nums[i];
        }
        return -1;
    }
};