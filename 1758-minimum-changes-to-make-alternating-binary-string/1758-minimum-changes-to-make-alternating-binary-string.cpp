class Solution {
public:
    int minOperations(string s) {
        int n=s.size();
        string r=s;
        int z=0,o=0;
        if(s[0]=='0')
        {
            o++;
        }
        else
        {
            z++;
        }
        for(int i=1;i<n;i++)
        {
            s[0]='0';
            if(s[i]==s[i-1])
            {
                z++;
                if(s[i]=='0')
                {
                    s[i]='1';
                }
                else
                {
                    s[i]='0';
                }
            }
        }
        for(int i=1;i<n;i++)
        {
            r[0]='1';
            if(r[i]==r[i-1])
            {
                o++;
                if(r[i]=='1')
                {
                    r[i]='0';
                }
                else
                {
                    r[i]='1';
                }
            }
        }
        return min(o,z);
    }
};