class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int cntneg = 0, cntpos =0;
        for(auto x:nums){
            if(x > 0){
                cntpos++;
            }else if(x < 0){
                cntneg++;
            }
        }
        return max(cntneg,cntpos);
    }
};