class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        map<int,int> m1;
        map<int,int> m2;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==1)
                {
                    m1[i]++;
                    m2[j]++;
                }
            }
        }
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==1)
                {
                    if(m1[i]==1&&m2[j]==1)
                    {
                        c++;
                    }
                }
            }
        }
        return c;
    }
};