class Solution {
public:
    string common(string a, string b){
        string res;
        for(int i=0; i<min(a.size(),b.size()); i++){
            if(a[i]==b[i]) res+=a[i];
            else break;
        }
        return res;
    }
    
    string longestCommonPrefix(vector<string>& strs) {
        string res = strs[0];
        for(int i=1; i<strs.size(); i++){
            res = common(res,strs[i]);
        }
        return res;
    }
};