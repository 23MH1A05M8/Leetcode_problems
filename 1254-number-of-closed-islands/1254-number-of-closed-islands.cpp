class Solution {
public:
bool CountIslands(vector<vector<int>>&grid, vector<vector<int>> &vis,int i,int j)
{
    int n=grid.size();
    int m=grid[0].size();
    vector<int> drow = {-1,0,1,0};
    vector<int> dcol={0,1,0,-1};
    bool isclosed=true;
    queue<pair<int,int>> q;
    q.push({i,j});
    vis[i][j]=1;
    while(!q.empty())
    {
        auto top_ele=q.front();
        int row=top_ele.first;
        int col=top_ele.second;
        q.pop();
        if(row==0||row==n-1||col==0||col==m-1) {
            isclosed=false;
        }
        for(int k=0;k<4;k++)
        {
            int nrow=row+drow[k];
            int ncol=col+dcol[k];
            if(nrow>=0 && nrow<n &&ncol >=0 && ncol <m && grid[nrow][ncol]==0 && !vis[nrow][ncol]){
                vis[nrow][ncol]=1;
                q.push({nrow,ncol});
            }
        }
    }
    return isclosed;
}
    int closedIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        int c=0;
         for(int i=0;i<n;i++)
         {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==0&&!vis[i][j])
                {
                    if(CountIslands(grid,vis,i,j)){
                        c++;
                    }
                }
            }
         }
         return c;
    }
};