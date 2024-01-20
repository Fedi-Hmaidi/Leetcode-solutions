class Solution {
public:
    vector<int> replaceElements(vector<int>& v) {
        vector<int> res;
        res.push_back(-1);
        int x = max(v[v.size()-1], -1);
        v.push_back(x);
        for(int i=v.size()-2; i>0; i--){
            if(v[i] > x){
                res.push_back(v[i]);
                x = v[i];
            }else{
                res.push_back(x);
            }
        }
        reverse(res.rbegin(), res.rend());
        return res;
    }
};