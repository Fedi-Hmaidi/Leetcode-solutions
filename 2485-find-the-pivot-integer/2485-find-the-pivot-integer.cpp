class Solution {
public:
    int pivotInteger(int n) {
        int l=1;
        int r=n;
        int lsum=1;
        int rsum=n;
        
        if(n==1) return 1;
        
        while(l<r){
            if(lsum < rsum){
                l++;
                lsum+=l;
            }else{
                r--;
                rsum+=r;
            }
            if(lsum==rsum && r==l){
                return l;
            }
        }
        return -1;
    }
};