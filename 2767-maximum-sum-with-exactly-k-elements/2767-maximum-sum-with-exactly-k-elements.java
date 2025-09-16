class Solution {
    public int maximizeSum(int[] nums, int k) {
        int max=nums[0];
        for(int i=0;i<nums.length;i++)
        {
            max=Math.max(max,nums[i]);
        }
        int s=0;
        for(int i=1;i<=k;i++)
        {
            s+=max;
            max=max+1;
        }
        return s;
    }
}