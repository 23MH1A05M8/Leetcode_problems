class Solution {
public:
    bool checkOnesSegment(string s) {
        int n=s.size();
        int zi=-1;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                zi=i;
                break;
            }
        }
        if(zi==-1)
        {
            return true;
        }
        else{
        for(int i=zi;i<n;i++)
        {
            if(s[i]=='1')
            {
                return false;
            }
        }
        }
        return true;
    }
};