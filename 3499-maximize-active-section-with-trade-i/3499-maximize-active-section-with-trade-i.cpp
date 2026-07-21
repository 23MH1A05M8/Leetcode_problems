class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n=s.size();
        int start=0,maxi=0,end=0,i=0,ones=0;
        while(i<n)
        {
           if(s[i]=='0')
           {
               start++;
               i++;
           }
           else
           {
                while(i<n&&s[i]=='1')
                {
                    ones++;
                    i++;
                }
                while(i<n&&s[i]=='0')
                {
                    end++;
                    i++;
                }
                if(start!=0&&end!=0)
                {
                    maxi=max(maxi,start+end);
                }
                start=end;
                end=0;
           }
        }
        return maxi+ones;
    }
};