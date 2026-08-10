class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        vector<vector<int>> dist(n,vector<int>(m));
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!vis[i][j]&&mat[i][j]==0)
                {
                    q.push({i,j});
                    dist[i][j]=0;
                    vis[i][j]=1;
                }
            }
        }
        vector<int> drow={-1,0,1,0};
        vector<int> dcol={0,1,0,-1};
        while(!q.empty())
        {
            auto top_ele=q.front();
            q.pop();
            int row=top_ele.first;
            int col=top_ele.second;
            for(int i=0;i<4;i++)
            {
                int nrow=row+drow[i];
                int ncol=col+dcol[i];
                if(nrow>=0 && nrow<n &&ncol>=0 && ncol<m && !vis[nrow][ncol])
                {
                    vis[nrow][ncol]=1;
                    dist[nrow][ncol]=dist[row][col]+1;
                    q.push({nrow,ncol});
                }
            }
        }
        return dist;
    }
};