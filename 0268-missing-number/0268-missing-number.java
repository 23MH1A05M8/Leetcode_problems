class Solution {
    public int missingNumber(int[] nums) {
       HashSet<Integer> set=new HashSet<>();
       int max=nums[0];
       for(int i=0;i<nums.length;i++)
       {
            max=Math.max(max,nums[i]);
            set.add(nums[i]);
       }
        for(int i=0;i<=max;i++)
        {
            if(!set.contains(i))
            {
                return i;
            }
        }
        return max+1;
    }
}