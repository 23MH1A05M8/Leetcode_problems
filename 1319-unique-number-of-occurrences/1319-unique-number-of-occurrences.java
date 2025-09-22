class Solution {
    public boolean uniqueOccurrences(int[] arr) {
        HashMap<Integer,Integer> map=new HashMap<>();
        for(int i:arr)
        {
            map.put(i,map.getOrDefault(i,0)+1);
        } 
        HashMap<Integer,Integer> map2=new HashMap<>();
        for(Map.Entry<Integer,Integer> i:map.entrySet())
        {
            map2.put(i.getValue(),map2.getOrDefault(i.getValue(),0)+1);
        }
        for(Map.Entry<Integer,Integer> i:map2.entrySet())
        {
            if(i.getValue()>1)
            {
                return false;
            }
        }
        return true;
    }
}