class Solution {
public:
    int minOperations(string s1, string s2) {
        int n=s1.size();
        if(n==1&&s1[0]!=s2[0]&&s1[0]=='1') return -1;
        int c=0;
        for(int i=0;i<n-1;i++)
            {
                if(s1[i]==s2[i])
                {
                    continue;
                }
                else{
                    if(s1[i+1]!=s2[i+1])
                    {
                        if(s1[i]=='1'&&s1[i+1]=='1')
                        {
                            c++;
                            if(s1[i]=='0')
                            {
                                s1[i]='1';
                                s1[i+1]='1';
                            }
                            else{
                                s1[i]='0';
                                s1[i+1]='0';
                            }
                        }
                    }
                    else if(s1[i]=='0')
                    {
                        s1[i]='1';
                        c++;
                    }
                }
            }
        int r=0;
        for(int i=0;i<n;i++)
            {
                if(s1[i]==s2[i])
                {
                    continue;
                }
                else if(s1[i]=='0'){
                    c++;
                    s1[i]='1';
                }
                else{
                    r++;
                }
            }
        return c+(r*2);
    }
};