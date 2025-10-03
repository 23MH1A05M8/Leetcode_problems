class Solution {
    public int searchInsert(int[] nums, int target) {
        int c=0;
        int n=nums.length;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==target)
            {
                c=i;
            }
            else if(nums[i]<target)
            {
                c=i+1;
            }
           
        }
        return c;
    }
}