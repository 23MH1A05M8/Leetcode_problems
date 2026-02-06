class Solution {
    public int sumDivisibleByK(int[] nums, int k) {
       HashMap<Integer,Integer> map=new HashMap<>();
        for(int i:nums)
            {
                map.put(i,map.getOrDefault(i,0)+1);
            }
        int s=0;
        for(Map.Entry<Integer,Integer> i:map.entrySet())
            {
                if(i.getValue()%k==0)
                {
                   s+=i.getValue()*i.getKey(); 
                }
            }
        return s;
    }
}