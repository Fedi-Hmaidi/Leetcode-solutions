class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> mp(nums1.begin(), nums1.end());
        unordered_set<int> mp2(nums2.begin(), nums2.end());
        vector<int> v1;
        vector<int> v2;
        
        for(auto x:mp){
            if(mp2.find(x) == mp2.end()){
                v1.push_back(x);
            }
        }
          for(auto x:mp2){
            if(mp.find(x) == mp.end()){
                v2.push_back(x);
            }
        }
        
        return {v1,v2};
    }
};