class Solution {
    public List<Integer> findMissingElements(int[] nums) {
        ArrayList<Integer> list=new ArrayList<>();
        Arrays.sort(nums);
        int start=nums[0];
        int ind=0;
        for(int i=start;i<nums[nums.length-1];i++)
            {
             if(nums[ind]==i)
             {
                 ind++;
             }
            else{
                list.add(i);
            }
            }
        return list;
    }
}