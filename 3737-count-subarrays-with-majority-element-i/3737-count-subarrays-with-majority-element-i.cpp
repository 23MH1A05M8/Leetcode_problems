class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n=nums.size();
        int res=0;
        for(int i=0;i<n;i++)
        {
            int c=0;
            for(int j=i;j<n;j++)
            {
                if(nums[j]==target)
                {
                    c++;
                }
                int len=j-i+1;
                if(c>len/2)
                {
                    res++;
                }
            }
        }
        return res;
    }
};