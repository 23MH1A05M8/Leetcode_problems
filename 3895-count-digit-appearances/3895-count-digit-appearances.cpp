class Solution {
public:
    int digitcount(int n,int digit)
    {
        int c=0;
        while(n!=0)
        {
            int r=n%10;
            if(r==digit)
            {
                c++;
            }
            n=n/10;
        }
        return c;
    }
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int tc=0;
        for(int i=0;i<nums.size();i++)
        {
            tc+=digitcount(nums[i],digit);
        }
        return tc;
    }

};