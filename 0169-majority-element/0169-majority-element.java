class Solution {
    public int majorityElement(int[] nums) {
        HashMap<Integer,Integer> map=new HashMap<>();
        for(int i=0;i<nums.length;i++)
        {
            map.put(nums[i],map.getOrDefault(nums[i],0)+1);
        }
        int max=0;
        for(int i:map.values())
        {
            max=Math.max(max,i);
        }
        int res=0;
        for(Map.Entry<Integer,Integer> i:map.entrySet())
        {
            if(i.getValue()==max)
            {
                res=i.getKey();
            }
        }
        return res;
    }
}