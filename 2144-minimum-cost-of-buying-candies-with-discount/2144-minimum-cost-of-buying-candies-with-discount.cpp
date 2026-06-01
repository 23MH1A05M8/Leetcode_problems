class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n=cost.size();
        sort(cost.begin(),cost.end());
        int mincost=0;
        int c=0;
        for(int i=n-1;i>=0;i--)
        {
            if(c<2)
            {
                mincost+=cost[i];
                c++;
            }
            else{
                c=0;
            }
        }
        return mincost;
    }
};