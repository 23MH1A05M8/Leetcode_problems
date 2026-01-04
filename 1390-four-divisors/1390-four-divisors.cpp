class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int n=nums.size();
        int ts=0;
        for(int j=0;j<n;j++)
        {
            int val=nums[j];
            int s=0;
            int c=2;
            for(int i=2;i*i<=val;i++)
            {
                if(val%i==0)
                {
                    c++;
                    s+=i;
                    int a1=val/i;
                    if(a1!=i)
                    {
                        c++;
                        s+=a1;
                    }
                }
                if(c>4) break;
            }
            if(c==4)
            {
                ts=ts+val+1+s;
            }
            s=0;
            c=2;
        }
        return ts;
    }
};