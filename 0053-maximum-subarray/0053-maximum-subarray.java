class Solution {
    public int maxSubArray(int[] nums) {
        int max_far=0;
        int max_sum=0;
        int c=0;
        int max=nums[0];
        for(int i=0;i<nums.length;i++)
        {
            max=Math.max(max,nums[i]);
            if(nums[i]<0)
            {
                c++;

            }
        }
        if(c==nums.length){
        return max;
        }
        for(int i=0;i<nums.length;i++)
        {
            max_far+=nums[i];
            if(max_far>max_sum)
            {
                max_sum=max_far;
            }
            if(max_far<0)
            {
                max_far=0;
            }
        }
        return max_sum;
    }
}