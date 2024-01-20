class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
            vector<int> v;
            v = nums;
            for(auto num:nums) v.push_back(num);

            return v;        
    }
};