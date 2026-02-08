class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int n=nums.size();
        int ts=0;
        for(int i=0;i<n;i++)
            {
                ts+=nums[i];
            }
        int c=0;
        for(int i=0;i<n-1;i++)
            {
                int r=(ts-nums[i])/(n-i-1);
                if(nums[i]>r)
                {
                    c++;
                }
                ts=ts-nums[i];
            }
        return c;
    }
};