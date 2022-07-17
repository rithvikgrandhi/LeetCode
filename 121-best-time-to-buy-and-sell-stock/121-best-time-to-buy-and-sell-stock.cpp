class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minrate=INT_MAX;
        int profit=0;
        
        for(int i=0;i<prices.size();i++){
            
            minrate=min(minrate,prices[i]);
            profit=max(profit,prices[i]-minrate);
        }
        return profit;
    }
};