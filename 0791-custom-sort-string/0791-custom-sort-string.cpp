class Solution {
public:
    string customSortString(string order, string s) {
       map<char, int> mp;
        //khabi l index mtaa char l mwjoudin f string order w baad sorti hasb order index f map 
        for (int i = 0; i < order.size(); i++) {
            mp[order[i]] = i;
        }

        sort(s.begin(), s.end(),[&](char a, char b) {
            return mp[a] < mp[b];
        });

        return s;
    }
};