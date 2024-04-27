class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
       vector<int> ans;
        int i=0; 
        while(i < prices.size()){
            int j= i + 1;
            int discount = INT_MAX;
            while(j < prices.size()){
                if(prices[j] <= prices[i]){
                    discount = prices[j];
                    break;
                }
                j++;
            }
            if(discount == INT_MAX){
                ans.push_back(prices[i]);
            }else{
                ans.push_back(prices[i]-discount);
            }
            i++;
        }
        return ans;
    }
};