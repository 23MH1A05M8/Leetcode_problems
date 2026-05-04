class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>> res(n,vector<int>(n));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                res[i][j]=matrix[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            int ind=n-1;
            for(int j=0;j<n;j++)
            {
                matrix[i][j]=res[ind--][i];
            }
        }
    }
};