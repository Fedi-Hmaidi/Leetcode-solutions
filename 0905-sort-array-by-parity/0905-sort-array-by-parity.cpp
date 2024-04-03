class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> v;
        vector<int> v2;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] % 2 == 0){
                v.push_back(nums[i]);
            }else{
                v2.push_back(nums[i]);
            }
        }
        for(auto x:v2) v.push_back(x);
        
        return v;
    }
};