class Solution {
public:
    bool isSubstringPresent(string s) {
       vector<string> v;
        for(int i = 0; i < s.size() - 1; i++) {
            v.push_back(s.substr(i, 2));
        }
        string str = s;
        reverse(str.begin(), str.end());
        vector<string> v2;
        for(int i = 0; i < str.size() - 1; i++) {
            v2.push_back(str.substr(i, 2));
        }
        for(auto x : v2) {
            if(find(v.begin(), v.end(), x) != v.end()) {
                return true;
            }
        }
        return false;
    }
};