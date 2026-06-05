class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n=mat.size();
        int m=mat[0].size();
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(int i=0;i<n;i++)
        {
            int soldiers=0;
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==1)
                {
                    soldiers++;
                }
            }
            pq.push({soldiers,i});
        }
        vector<int> v;
        for(int i=0;i<k;i++)
        {
            pair<int,int> top_ele=pq.top();
            pq.pop();
            v.push_back(top_ele.second);
        }
        return v;
    }
};