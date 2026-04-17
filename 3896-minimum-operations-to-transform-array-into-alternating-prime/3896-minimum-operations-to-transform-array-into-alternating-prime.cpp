class Solution {
public:
    bool isprime(int n)
    {
        if(n<=1)
        {
            return false;
        }
        if(n==2) return true;
        if(n%2==0) return false;
        for(int i=3;i*i<=n;i+=2)
        {
            if(n%i==0)
            {
                return false;
            }
        }
        return true;
    }
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            int v=nums[i];
            if(i%2==0)
            {
                while(!isprime(v))
                {
                    v++;
                    c++;
                }
            }
            else{
                while(isprime(v))
                {
                    v++;
                    c++;
                }
            }
        }
        return c;
    }
};