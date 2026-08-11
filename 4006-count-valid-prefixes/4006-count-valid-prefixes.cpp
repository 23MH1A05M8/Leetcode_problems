class Solution {
public:
    int countValidPrefixes(string s) {
        // return 0;
        int n=s.size();
        int res=0;
        int z=0,o=0;
        for(int i=0;i<n;i++)
            {
                if(s[i]=='1') o++;
                else z++;
                if(abs(z-o)<=1) res++;
            }
        return res;
    }
};