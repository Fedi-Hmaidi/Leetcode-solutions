class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& v) {
        map<string,vector<int>>mp;
        
        for(int i=0; i<v.size(); i++){
            string s = v[i];
            sort(s.begin(),s.end());
            mp[s].push_back(i);
        }
        vector<vector<string>> res;
        for(auto x:mp){
            vector<string>st;
            for(int i=0; i<x.second.size(); i++){
                st.push_back(v[x.second[i]]);
            }
            res.push_back(st);
        }
        
        return res;
    }
};