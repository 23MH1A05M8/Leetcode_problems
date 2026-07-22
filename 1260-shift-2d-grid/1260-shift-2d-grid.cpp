class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();
        int t=n*m;
        k=k%t;
        if(k==0) return grid;
        vector<int> res;
        vector<vector<int>> r;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                res.push_back(grid[i][j]);
            }
        }
        // if(n==1||k==0) return grid;
        reverse(res.begin(),res.end());
        reverse(res.begin(),res.begin()+k);
        reverse(res.begin()+k,res.end());
        int ind=0;
        for(int i=0;i<m;i++)
        {
            vector<int> d;
            for(int j=0;j<n;j++)
            {
                d.push_back(res[ind++]);
            }
            r.push_back(d);
        }

        return r;
    }
};