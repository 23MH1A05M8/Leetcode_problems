class Solution {
public:
    char bits(int n,int k,string s,int i)
    {
        string curr=s;
        if(n==0) return s[k-1];
        for (char &c : s) {
            c = (c == '0') ? '1' : '0';
        }
        reverse(s.begin(), s.end());
        s=curr+"1"+s;
        return bits(n-1,k,s,i+1);
    }
    char findKthBit(int n, int k) {
        string s="0";
        return bits(n-1,k,s,0);
    }
};