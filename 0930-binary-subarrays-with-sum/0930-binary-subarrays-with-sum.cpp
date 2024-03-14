class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int ans = 0;
        int sum = 0;
        unordered_map<int,int> mp;
        for(auto x:nums){
            sum+=x;
            if(sum == goal){
                ans++;
            }
            
            if(mp[sum-goal]){
                ans+=mp[sum-goal];
            }
            mp[sum]++;
        }
        return ans;
        
    }
};