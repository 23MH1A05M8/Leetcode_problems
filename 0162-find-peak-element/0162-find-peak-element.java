class Solution {
    public int findPeakElement(int[] nums) {
        int max=nums[0];
        for(int i=0;i<nums.length;i++)
        {
            max=Math.max(max,nums[i]);
        }
        int res=0;
        for(int i=0;i<nums.length;i++)
        {
            if(nums[i]==max)
            {
                res=i;
            }
        }
        return res;
    }
}