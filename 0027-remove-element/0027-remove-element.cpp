class Solution {
public:
    int removeElement(vector<int>& v, int val) {
        int n = v.size();
        int res = 0;
        for(int i=0; i<n; i++){
            if(v[i] != val){
                swap(v[i],v[res]);
                res++;
            }
        }
        return res;
    }
};