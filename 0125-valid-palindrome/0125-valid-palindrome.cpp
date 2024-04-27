class Solution {
public:
    bool isPalindrome(string s) {
        int i =0, j = s.size()-1;
            
        while(i < j){
            if(isalnum(s[i]) && isalnum(s[j])){
                if(tolower(s[i]) == tolower(s[j])){
                    i++;
                    j--;
                }else{
                    return false;
                }
            }else if(isalnum(s[i])){
                j--;
            }else{
                i++;
            }
        }
        return true;
    }
};