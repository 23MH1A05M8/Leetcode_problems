class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int n=boxGrid.size();
        int m=boxGrid[0].size();
        for(int i=n-1;i>=0;i--)
        {
            int c=0;
            for(int j=m-1;j>=0;j--)
            {
                if(boxGrid[i][j]=='.')
                {
                    c++;
                }
                if(boxGrid[i][j]=='*') c=0;
                 if(boxGrid[i][j]=='#' && c!=0)
                {
                    if(j+c<m-1)
                    {
                        swap(boxGrid[i][j],boxGrid[i][j+c]);
                    }
                    else{
                        swap(boxGrid[i][j],boxGrid[i][m-1]);
                    }
                }
            }
        }
        vector<vector<char>> res(m, vector<char>(n));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                res[j][n-i-1]=boxGrid[i][j];
            }
        }
        return res;
    }
};