class Solution {
public:
    
    static  bool compare(const pair<int, int> &a, const pair<int, int> &b) {
            return a.second > b.second; 
        }
        
    vector<int> topKFrequent(vector<int>& v, int k) {
                map<int,int> mp;
        for(int i=0; i<v.size(); i++){
            mp[v[i]]++;
        }
        vector<pair<int, int>> vp;
        for(auto x:mp){
            vp.push_back(make_pair(x.first, x.second));
        }
      
        sort(vp.begin(),vp.end(), compare);
        vector<int> st;
        for(int i=0; i<k; i++){
            st.push_back(vp[i].first);
        }
        return st; 
    }
};