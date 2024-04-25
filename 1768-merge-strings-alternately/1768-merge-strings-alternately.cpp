
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0, j = 0;
        string mergedString = "";
        while (i < word1.size() || j < word2.size()) {
            if (i < word1.size()) {
                mergedString.push_back(word1[i]);
                i++;
            }
            if (j < word2.size()) {
                mergedString.push_back(word2[j]);
                j++;
            }
        }
        return mergedString;
    }
};
