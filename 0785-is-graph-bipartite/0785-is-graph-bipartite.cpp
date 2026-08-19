class Solution {
public:
    bool dfs(vector<vector<int>>& graph,vector<int> & vis,vector<int>& col, int ind,int c)
    {
        vis[ind]=1;
        col[ind]=c;
        for(auto node:graph[ind])
        {
            // cout<<node<<" "<<c<<endl;
            if(!vis[node])
            {
                if(!dfs(graph,vis,col,node,!c)) return false;
            }
            else if(c==col[node]) return false;
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> vis(n);
        vector<int> col(n);
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                if(!dfs(graph,vis,col,i,0)) return false;
            }
        }
        return true;
    }
};