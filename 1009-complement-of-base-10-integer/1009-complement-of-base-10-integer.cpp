class Solution {
public:
    int bitwiseComplement(int n) {
         int c=0,s=0;
         if(n==0) return 1;
        while(n>0)
        {
            int bit=n%2;
            if(bit==1)
            {
                bit=0;
            }
            else
            {
                bit=1;
            }
            s+=(bit*pow(2,c));
            c++;
            n=n/2;
        }
        return s;
    }
};