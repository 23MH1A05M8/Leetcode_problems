class Solution {
    public int[] findOriginalArray(int[] changed) {
       HashMap<Integer,Integer> map=new HashMap<>();
       ArrayList<Integer> list=new ArrayList<>();
       if(changed.length%2!=0) return new int[0];
       Arrays.sort(changed);
       for(int i=0;i<changed.length;i++)
       {
            map.put(changed[i],map.getOrDefault(changed[i],0)+1);
       }
       for(int i:changed)
       {
        if(map.get(i)==0) continue;
        if(map.getOrDefault(i*2,0)==0)
        {
            return new int[0];
        }
        list.add(i);
        map.put(i,map.get(i)-1);
        map.put(i*2,map.get(i*2)-1);
       }
       int[] res=new int[list.size()];
       for(int i=0;i<list.size();i++)
       {
        res[i]=list.get(i);
       }
       return res;

    }
}