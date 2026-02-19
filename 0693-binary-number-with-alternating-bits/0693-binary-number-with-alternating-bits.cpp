class Solution {
public:
    bool hasAlternatingBits(int n) {
        string b="";
        while(n>0)
        {
            int bit=n&1;
            b.push_back('0'+bit);
            n=n>>1;
        }
        reverse(b.begin(),b.end());
        for(int i=1;i<b.size();i++)
        {
            if(b[i]==b[i-1])
            {
                return false;
            }
        }
        return true;
    }
};