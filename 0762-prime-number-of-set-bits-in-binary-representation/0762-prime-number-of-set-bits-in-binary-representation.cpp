class Solution {
public:
    bool isprime(int n)
    {
        if(n<=1) return false;
        if(n==2) return true;
        if(n%2==0) return false;
        for(int i=3;i*i<=n;i++)
        {
            if(n%i==0)
            {
                return false;
            }
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int res=0;
        for(int i=left;i<=right;i++)
        {
            int j=i;
            int c=0;
            while(j>0){
                int bit=j%2;
                if(bit==1){
                    c++;
                }
                j=(j>>1);
            }
            
            if(isprime(c))
            {
                // cout << c << endl;
                res++;
            }
        }
        return res;
    }
};