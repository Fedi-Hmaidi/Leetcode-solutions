class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>res;
        for(int i=0; i<n; i++){
            vector<int> v;
            for(int j=0; j<i+1; j++){
                if(i>j && j > 0){
                    v.push_back(res[i-1][j-1]+res[i-1][j]);
                }else{
                    v.push_back(1);
                }
            }
            res.push_back(v);
        }
        return res;
    }
};