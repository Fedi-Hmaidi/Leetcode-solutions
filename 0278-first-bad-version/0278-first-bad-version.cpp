// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l=1,r=n;
        while(l<r){
            int mid = l+(r-l)/2;
            if(isBadVersion(mid)){
                r = mid;
            }else{
                l=mid+1;
            }
        }
        /* kf kf zouz ht trj3 l r khtr bch tkf wkt l=r*/
        return l ;
    }
};