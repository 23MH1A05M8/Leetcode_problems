class Solution {
public:
    int minBitFlips(int start, int goal) {
        int res=start^goal;
        int c=0;
        while(res)
        {
            res=res&(res-1);
            c++;
        }
        return c;
    }
};