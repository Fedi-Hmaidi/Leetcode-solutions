class Solution {
public:
    int missingNumber(vector<int>& v) {
        sort(v.begin(), v.end());
        int l=0,r=v.size()-1;
        while(l <=r){
            int mid = (r+l)/2;
            if(v[mid] == mid){
                l=mid+1;
            }else{
                r = mid-1;
            }
        }
        return l;
    }
};