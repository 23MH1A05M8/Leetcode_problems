class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> s;
        int n=prices.size();
        for(int i=0;i<n;i++)
        {
            while(!s.empty()&&prices[s.top()]>=prices[i])
            {
                prices[s.top()]-=prices[i];
                s.pop();
            }
            s.push(i);
        }
        return prices;
    }
};