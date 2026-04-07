class Solution {
public:
    int balancedStringSplit(string s) {
        int n=s.size();
        int l=0,r=0;
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='L')
            {
                l++;
            }
            else if(s[i]=='R')
            {
                r++;
            }
            if(l==r)
            {
                c++;
                l=0;
                r=0;
            }
        }
        return c;
    }
};