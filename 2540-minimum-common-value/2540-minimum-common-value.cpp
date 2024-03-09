class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> mp;
        map<int,int> mp2;
        for(auto x:nums1){
            mp[x]++;
        }
          for(auto x:nums2){
            mp2[x]++;
        }
        for (auto x : mp) {
            if (mp2.find(x.first) != mp2.end()) {
                return x.first;
            }
        }   
        return -1;
    }
};