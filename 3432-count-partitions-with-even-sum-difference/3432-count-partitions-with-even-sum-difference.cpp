class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n=nums.size();
        int ps[n];
        ps[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            ps[i]=ps[i-1]+nums[i];
        }
        int c=0;
        for(int i=0;i<n-1;i++)
        {
            int r=ps[i]-(ps[n-1]-ps[i]);
            if(r%2==0)
            {
                c++;
            }
        }
        return c;
    }
};