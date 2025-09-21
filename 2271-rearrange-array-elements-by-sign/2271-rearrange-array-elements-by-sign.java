class Solution {
    public int[] rearrangeArray(int[] nums) {
        ArrayList<Integer> pos=new ArrayList<>();
        ArrayList<Integer> neg=new ArrayList<>();
        for(int i=0;i<nums.length;i++)
        {
            if(nums[i]>0)
            {
                pos.add(nums[i]);
            }
            else if(nums[i]<0)
            {
                neg.add(nums[i]);
            }
        }
        int pi=0;
        int ni=0;
        int ai=0;
        while(pi<pos.size()&&ni<neg.size())
        {
            nums[ai++]=pos.get(pi++);
            nums[ai++]=neg.get(ni++);
        }
        return nums;
    }
}