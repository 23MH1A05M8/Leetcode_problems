class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int n=colors.size();
        // vector<int> v(n);
        // for(int i=0;i<n;i++)
        // {
        //     v.push_back(colors[i]);
        // }
        // v[n]=colors[0];
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                if((colors[n-1]==1&&colors[i]==0&&colors[i+1]==1)||(colors[n-1]==0&&colors[i]==1&&colors[i+1]==0))
                {
                    c++;
                }
            }
            else if(i==n-1)
            {
                if((colors[n-2]==1&&colors[n-1]==0&&colors[0]==1)||(colors[n-2]==0&&colors[n-1]==1&&colors[0]==0))
                {
                    c++;
                }
            }
            else
            {
                if(((colors[i-1]==0&&colors[i]==1&&colors[i+1]==0)||(colors[i-1]==1&&colors[i]==0&&colors[i+1]==1)))
                {
                    c++;
                }
            }
        }
        return c;
    }
};