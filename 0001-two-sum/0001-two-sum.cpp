class Solution {
public:
    
    static bool compare(pair<int,int> p1, pair<int,int> p2){
        return p1.second < p2.second;
    }
    
    vector<int> twoSum(vector<int>& v, int t) {
        vector<pair<int,int>> vp;
        for(int i=0; i<v.size(); i++){
            vp.push_back({i,v[i]});
        }
        sort(vp.begin(), vp.end(), compare);
        
        int i = 0; 
        int j = v.size()-1;
        vector<int> ans;
        while(i < j){
            if(vp[i].second + vp[j].second == t){
                ans.push_back(vp[i].first);
                ans.push_back(vp[j].first);
                return ans;
            }else if(vp[i].second + vp[j].second > t){
                j--;
            }else{
                i++;
            }
        }
        return {};
    }
};