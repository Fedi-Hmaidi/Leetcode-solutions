class Solution {
public:
    
    static bool isPalindrome(string s){
        string s2 = s;
        reverse(s2.begin(),s2.end());
        return s2==s;
    }
    int removePalindromeSub(string s) {
        if(isPalindrome(s)){
            return 1;
        }
        
        return 2;
    }
};