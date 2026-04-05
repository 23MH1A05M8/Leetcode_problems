class Solution {
public:
    bool judgeCircle(string s) {
        int lr=0,up=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='L')
            {
                lr++;
            }
            else if(s[i]=='R')
            {
                lr--;
            }
            else if(s[i]=='U'){
                up++;
            }
            else{
                up--;
            }
        }
        if(lr==0&&up==0)
        {
            return true;
        }
        return false;
    }
};