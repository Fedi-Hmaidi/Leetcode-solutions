class Solution {
public:
    vector<int> twoSum(vector<int>& v, int t) {
        map<int,int> mp;
        vector<int> res;
        
        for (int i=0; i<v.size(); i++){
            if(mp.find(t-v[i]) != mp.end()){
                res.push_back(i);
                res.push_back(mp[t-v[i]]);
                return res;
            }
            mp[v[i]]=i;
        }
    return{};
    }
};