class Solution {
public:
    bool canPlaceFlowers(vector<int>& v, int n) {
    if(n==0) return true;
        
        v.insert (v.begin(),0);
        v.push_back(0);
    
        int cnt = 0;
        for (int i=1; i<v.size()-1; i++){
            if(v[i]==0 && v[i+1]==0 && v[i-1] == 0){
                v[i] = 1;
                n--;
            }
            if(n == 0){
                return true;
            }
        }
        return false;
    }
};