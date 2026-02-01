class Solution {
public:
    int countMonobit(int n) {
        int c=0;
        for(int i=0;i<=n;i++)
            {
                if(i==0) {
                    c++;
                    continue;
                }
                 set<int> se;
                int t=i;
                while(t>0)
                    {
                        int bit=t%2;
                        se.insert(bit);
                        // cout<<bit;
                        t=t/2;
                    }
                // cout<<endl;
                if(se.size()==1)
                {
                    c++;
                    se.clear();
                }
            }
        return c;
    }
};