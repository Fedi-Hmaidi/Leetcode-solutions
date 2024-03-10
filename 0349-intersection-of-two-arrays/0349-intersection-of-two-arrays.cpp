class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> st1;
        set<int> st2;
        vector<int> res;
        for(auto x:nums1){
            st1.insert(x);
        }
         for(auto x:nums2){
            st2.insert(x);
        }
        for(auto x:st1){
            if(st2.find(x) != st2.end()){
                res.push_back(x);
            }
        }
        return res;
    }
};