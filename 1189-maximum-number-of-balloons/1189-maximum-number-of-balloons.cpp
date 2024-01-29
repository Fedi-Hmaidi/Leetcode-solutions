class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string s = "balloon";
        map<char,int>mp;
        for(auto x:s){
            mp[x]++;
        }
        map<char,int> mp2;
        for(auto z:text){
                mp2[z]++;
        }
        int res = INT_MAX;
        for(auto [key, value]: mp){
            res = min(res,mp2[key]/value);
            
        }
        return res;
        
    }
};