class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        vector<int> indeg(numCourses,0);
        for(auto& p:prerequisites)
        {
            int a=p[0],b=p[1];
            adj[b].push_back(a);
        }
        for(int i=0;i<numCourses;i++){
            for(int node:adj[i])
            {
                indeg[node]++;
            }
        }
        queue<int> q;
        for(int i=0;i<numCourses;i++)
        {
            if(indeg[i]==0)
            {
                q.push(i);
            }
        }
        int c=0;
        while(!q.empty())
        {
            int x=q.front();
            q.pop();
            c++;
            for(int node:adj[x])
            {
                indeg[node]--;
                if(indeg[node]==0)
                {
                    q.push(node);
                }
            }
        }
        return c==numCourses;
    }
};