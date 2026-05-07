class Solution {
public:
    bool checkValidString(string s) {
        int n=s.size();
        int c=0,starcount=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                c++;
            }
            else if(s[i]=='*')
            {
                starcount++;
            }
            else{
                if(c>0)
                {
                    c--;
                }
                else if(starcount>0){
                    // continue;
                    starcount--;
                }
                else
                {
                    return false;
                }
            }
        }

        c=0,starcount=0;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]==')')
            {
                c++;
            }
            else if(s[i]=='*')
            {
                starcount++;
            }
            else{
                if(c>0)
                {
                    c--;
                }
                else if(starcount>0){
                    // continue;
                    starcount--;
                }
                else
                {
                    return false;
                }
            }
        }
        return true; 
    }
};