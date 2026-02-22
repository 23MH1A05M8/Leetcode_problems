class Solution {
public:
    string maximumXor(string s, string t) {
        int n=t.size();
       int c1=0,c2=0;
        for(int i=0;i<n;i++)
            {
                if(t[i]=='0')
                {
                    c1++;
                }
                else{
                    c2++;
                }
            }
        string ans="";
        for(int i=0;i<n;i++)
            {
                if(s[i]=='0')
                {
                   if(c2>0)
                   {
                       ans+='1';
                       c2--;
                   }
                    else{
                        ans+='0';
                        c1--;
                    }
                }
                else{
                    if(c1>0)
                    {
                        ans+='0';
                        c1--;
                    }
                    else{
                        ans+='1';
                        c2--;
                    }
                }     
            }
        string res="";
        for(int i=0;i<n;i++){
            if(s[i]==ans[i])
            {
                res+='0';
            }
            else
            {
                res+='1';
            }
        }
        return res;
    }
};