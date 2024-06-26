class Solution {
public:
   
    string reverseVowels(string s) {
        int i=0;
        int j= s.size()-1;
        while(i <j ){
            if(isVowel(s[i]) && isVowel(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
            }else if(isVowel(s[i])){
                j--;
            }else if(isVowel(s[j])){
                i++;
            }else{
                i++;
                j--;
            }
        }
        return s;
    }
     private:
        bool isVowel(char c){
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    
};