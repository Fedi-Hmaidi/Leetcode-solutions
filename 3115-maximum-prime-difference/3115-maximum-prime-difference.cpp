class Solution {
public:
bool isprime(int n){
    if(n==1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)return false;
    }
    return true;
}
    int maximumPrimeDifference(vector<int>& nums) {
    int n = nums.size();
        int left = 0; 
        int right = n - 1; 
        int ans = 0;
        while (left < n && !isprime(nums[left])) {
            left++;
        }
        while (right >= 0 && !isprime(nums[right])) {
            right--;
        }
        if (left < right) {
            ans = right - left;
        }
        
        return ans;
    }
};