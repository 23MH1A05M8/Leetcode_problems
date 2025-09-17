class Solution {
    public boolean checkPrimeFrequency(int[] nums) {
       HashMap<Integer,Integer> map=new HashMap<>();
       for(int i=0;i<nums.length;i++)
       {
        map.put(nums[i],map.getOrDefault(nums[i],0)+1);
       }
       int r=0;
       for(Map.Entry<Integer,Integer> i:map.entrySet())
       {
            int val=i.getValue();
            if(val<=1) continue;
            int c=0;
            for(int j=2;j*j<=val;j++)
            {
                if(val%j==0)
                {
                    c++;
                    break;
                }
            }
            if(c==0)
            {
               r++;
            }
       }
       if(r>=1)
       {
        return true;
       }
       return false;
    }
}