class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        unordered_map<char, char> s_to_t;
        unordered_map<char, char> t_to_s;

        for (int i = 0; i < s.size(); ++i) {
            char cs = s[i];
            char ct = t[i];

            if (s_to_t.find(cs) != s_to_t.end()) {
                if (s_to_t[cs] != ct) {
                    return false;
                }
            } else {
                s_to_t[cs] = ct;
            }

            if (t_to_s.find(ct) != t_to_s.end()) {
                if (t_to_s[ct] != cs) {
                    return false;
                }
            } else {
                t_to_s[ct] = cs;
            }
        }

        return true;
    }
};
