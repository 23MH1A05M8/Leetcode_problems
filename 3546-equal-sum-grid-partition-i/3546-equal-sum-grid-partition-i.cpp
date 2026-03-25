class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        long long ts=0;
        for(long long i=0;i<m;i++)
        {
            for(long long j=0;j<n;j++)
            {
                ts+=grid[i][j];
            }
        }
        long long target;
        if(ts%2!=0) return false;
        else{
            target=ts/2;
        }
        long long s=0;
        for(long long i=0;i<m-1;i++)
        {
            for(long long j=0;j<n;j++)
            {
                s+=grid[i][j];
            }
            if(s==target)
            {
                return true;
            }
        }
        long long su=0;
        for(long long i=0;i<n-1;i++)
        {
            for(long long j=0;j<m;j++)
            {
                su+=grid[j][i];
            }
            if(su==target)
            {
                return true;
            }
        }
        return false;
    }
};