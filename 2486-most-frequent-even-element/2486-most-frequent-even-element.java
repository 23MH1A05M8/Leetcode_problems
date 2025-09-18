class Solution {
    public int mostFrequentEven(int[] nums) {
        TreeMap<Integer,Integer> map=new TreeMap<>();
        for(int i=0;i<nums.length;i++)
        {
            if(nums[i]%2==0){
            map.put(nums[i],map.getOrDefault(nums[i],0)+1);
            }
        }
        int max=0;
        for(int i:map.values())
        {
            max=Math.max(max,i);
        }
        for(Map.Entry<Integer,Integer> i:map.entrySet())
        {
            if(i.getValue()==max)
            {
                return i.getKey();
            }
        }
        return -1;
    }
}