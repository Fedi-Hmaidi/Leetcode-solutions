class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& v) {
        int ans = 1;
        sort(v.begin(), v.end());
        int x=v[0][0];
        int y=v[0][1];
        for(int i=1; i<v.size(); i++){
            int x2 = v[i][0];
            int y2 = v[i][1];
            if(x2 <=y){
                x=max(x,x2);
                y=min(y,y2);
            }else{
                ans++;
                x=x2;
                y=y2;
            }
        }
        return ans;
    }
};