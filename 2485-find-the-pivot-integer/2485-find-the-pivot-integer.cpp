class Solution {
public:
    int pivotInteger(int n) {
    if (n == 1) return 1;

    int totsum = n * (n + 1) / 2; 
    int sum = 0; 
        
    int l = 1, r = n;
    while (l < r) {
        int mid = (l+r)/2;
        int lsum=mid*(mid-1)/2;
        int rsum=totsum-mid-lsum;
        if (lsum < rsum) { 
            l = mid + 1;
        } else {
            r = mid-1;
        }
        if (lsum == rsum) {
            return mid; 
        }
    }

    return -1;

    }
};
