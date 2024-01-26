class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        vector<string> vs;
        string word;
        while(ss >> word){
            vs.push_back(word);
        }
        if (vs.size() != pattern.size()) {
            return false;
        }
        unordered_map<char,string> ump;
        for(int i=0; i<pattern.size(); i++){
            auto it = ump.find(pattern[i]);
            if(it == ump.end()){
                ump[pattern[i]] = vs[i];
            }else if(it->second !=vs[i]){
                return false;
            }
        }
        unordered_set<string> ust;
        for(auto it:ump){
            if(!ust.insert(it.second).second){
                return false;
            }
        }
        return true;
    }
};