class Solution {
    public List<Integer> findLonely(int[] nums) {
        Arrays.sort(nums);
        // HashMap<Integer,Integer> map=new HashMap<>();
        // for(int i=0;i<nums.length;i++)
        // {
        //     map.put(nums[i],getOrDefault(nums[i],0)+1);
        // }
       ArrayList<Integer> list=new ArrayList<>();
       for(int i=0;i<nums.length;i++)
       {
        if(nums.length==1){
            list.add(nums[i]);
            return list;
        }
        if(i!=0&&i!=nums.length-1)
        {
        if((nums[i-1]!=nums[i]&&nums[i]!=nums[i+1])&&(nums[i-1]!=nums[i]-1&&nums[i-1]!=nums[i]+1)&&(nums[i+1]!=nums[i]-1&&nums[i+1]!=nums[i]+1))
        {
            list.add(nums[i]);
        }
        }
        else if(i==0)
        {
            if((nums[i]!=nums[i+1])&&(nums[i+1]!=nums[i]-1&&nums[i+1]!=nums[i]+1))
            {
                list.add(nums[i]);
            }
        }
        else if(i==nums.length-1)
        {
            if((nums[i]!=nums[i-1])&&(nums[i-1]!=nums[i]-1&&nums[i-1]!=nums[i]+1))
            {
                list.add(nums[i]);
            }
        }
       } 
       return list;
    }
}