#include <string>
#include <algorithm>

class Solution {
public:
    string reversePrefix(string word, char ch) {
        int j = 0;
        string s1, s2;
        while (j < word.size()) {
            if (word[j] == ch) {
                break;
            }
            j++;
        }
        if (j == word.size()) {
            return word;
        } else {
            s1 = word.substr(0, j + 1);
            s2 = word.substr(j + 1, word.size()); // Adjusted to start from j + 1
            reverse(s1.begin(), s1.end());
            return s1 + s2;
        }
    }
};
