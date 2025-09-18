class Solution {
    public int mostFrequentEven(int[] nums) {
        TreeMap<Integer,Integer> map=new TreeMap<>();
        for(int i=0;i<nums.length;i++)
        {
            if(nums[i]%2==0){
            map.put(nums[i],map.getOrDefault(nums[i],0)+1);
            }
        }
       
        if(map.isEmpty()) 
       {
         return -1;
       }
        int max=0,res=-1;
        for(Map.Entry<Integer,Integer> i:map.entrySet())
        {
            if(i.getValue()>max)
            {
                max=i.getValue();
                res=i.getKey();
            }
        }
        return res;
    }
}