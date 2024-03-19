
class Solution {
public:
    vector<long long> unmarkedSumArray(vector<int>& nums, vector<vector<int>>& queries) {
        long long sum = 0; 
        set<pair<int,int>> vp;
        vector<long long> res;
        for(int i = 0; i < nums.size(); i++) {
            vp.insert({nums[i], i});
            sum += nums[i];
        }
        for(auto& q : queries) {
            int indexVal = q[0];
            int k = q[1];
            sum -= nums[indexVal];
            nums[indexVal] = 0;
            while(vp.size() && k){
                auto [val,indx]=*vp.begin();
                vp.erase({val,indx});
                if(nums[indx]){
                    sum-=nums[indx];
                    nums[indx]=0;
                    k--;
                }
            }
            res.push_back(sum);
        }
        return res;
    }
};