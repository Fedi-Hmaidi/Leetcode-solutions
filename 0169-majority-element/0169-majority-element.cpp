class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        int res = 0;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }   
        for(auto x:mp){
            if(x.second > (nums.size()/2)){
                res = x.first;
            }
        }
        return res;
    }
};