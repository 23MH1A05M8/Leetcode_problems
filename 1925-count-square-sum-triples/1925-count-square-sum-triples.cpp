class Solution {
public:
    int countTriples(int n) {
        int co=0;
        for(int i=1;i<=n;i++)
            for(int j=i+1;j<n;j++)
            {
                float c=sqrt(pow(i,2)+pow(j,2));
                // cout<<(int)c<<" ";
                if(c==(int)c&&c<=n)
                {
                    co++;
                }
            }
            return co*2;
    }
};