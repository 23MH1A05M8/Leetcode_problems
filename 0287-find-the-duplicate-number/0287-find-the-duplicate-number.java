class Solution {
    public int findDuplicate(int[] nums) {
        HashMap<Integer,Integer> map=new HashMap<>();
        for(int n:nums)
        {
            map.put(n,map.getOrDefault(n,0)+1);
        }
        int r=0;
        for(Map.Entry<Integer,Integer> i:map.entrySet())
        {
            if(i.getValue()>1)
            {
                r=i.getKey();
            }
        }
        return r;
    }
}