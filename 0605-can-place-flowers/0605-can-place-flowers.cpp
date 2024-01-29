class Solution {
public:
    bool canPlaceFlowers(vector<int>& v, int n) {
    
        int cnt = 0;
        v.insert(v.begin(),0);
        v.push_back(0);
        for (int i=1; i<v.size()-1; i++){
            if(v[i]==0 && v[i+1]==0 && v[i-1] == 0){
                v[i] = 1;
                cnt++;
            }
            
        }
        return cnt >= n;
    }
};