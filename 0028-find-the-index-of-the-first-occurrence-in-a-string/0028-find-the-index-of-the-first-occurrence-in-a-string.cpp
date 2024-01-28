class Solution {
public:
    static bool isSubstring(string s1, string s2){
        return s2.find(s1) != string::npos;
    }
    int strStr(string haystack, string needle) {
        if(!isSubstring(needle,haystack)){
            return -1;
        }
        int indx = haystack.find(needle);
        return indx;
    }
};