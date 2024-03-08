class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int> mp;
        int mx = 0;
        int sum = 0;
        for(auto x:nums){
            mp[x]++;
        }
        for(auto [x,c]: mp){
            mx=max(mx,c);
        }
        for(auto num:mp){
            if(num.second == mx){
                sum+=num.second;
            }
        }
        return sum;
    }
};

