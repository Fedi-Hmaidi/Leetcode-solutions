class Solution {
public:
    int countNegatives(vector<vector<int>>& v) {
        int ans=0;
        for(int i=0; i<v.size(); i++){
            vector<int>res=v[i];
            for(int i=0; i<res.size(); i++){
                if(res[i] <0){
                    ans++;
                }
            }
        }
        return ans;
    }
};