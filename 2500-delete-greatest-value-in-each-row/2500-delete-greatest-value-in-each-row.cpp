class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++)
        {
            sort(grid[i].begin(),grid[i].end());
        }
        int s=0;
        for(int i=0;i<n;i++)
        {
            int maxi=INT_MIN;
            for(int j=0;j<m;j++)
            {
                // cout<<grid[i][j]<<" ";
                maxi=max(maxi,grid[j][i]);
            }
            // cout<<endl;
            s+=maxi;
        }
        return s;
    }
};