class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = strs[0];
        string res = "";

        for(int i=0; i<strs.size(); i++){ //find minimum string length: it could be he max prefix
            if(strs[i].size() < s.size()){
                s = strs[i];
            }
        }
        int index = 0;
        while(index < s.size()){
            char ch = s[index];
            for(int i=0; i<strs.size(); i++){
                if(ch == strs[i][index]){
                   continue;
                }
                return s.substr(0,index);
            }
            index++;
            res+=ch;
        }
        return res;
    }
};