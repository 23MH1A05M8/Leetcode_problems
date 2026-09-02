class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mini=INT_MAX;
        int max_profit=0;
        for(int i=0;i<n;i++)
        {
            mini=min(mini,prices[i]);
            int profit=prices[i]-mini;
            max_profit=max(max_profit,profit);
        }
        return max_profit;
    }
};