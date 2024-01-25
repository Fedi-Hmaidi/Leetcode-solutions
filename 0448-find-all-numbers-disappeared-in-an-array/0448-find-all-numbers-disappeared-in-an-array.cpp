class Solution {
public:
  
    vector<int> findDisappearedNumbers(vector<int>& nums) {
       unordered_set<int> st;
        vector<int> res;
        for(auto x:nums) st.insert(x);
        for(int i=1; i<=nums.size(); i++){
            if(st.find(i) == st.end()){
                res.push_back(i);
            }
        }
        return res;
    }
};