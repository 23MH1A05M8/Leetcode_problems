class Solution {
    public String kthDistinct(String[] arr, int k) {
        LinkedHashMap<String,Integer> map=new LinkedHashMap<>();
        for(int i=0;i<arr.length;i++)
        {
            map.put(arr[i],map.getOrDefault(arr[i],0)+1);
        }
        int c=0;
        String res="";
        for(Map.Entry<String,Integer> i:map.entrySet())
        {
            if(i.getValue()==1)
            {
                c++;
                if(c==k)
                {
                    res=i.getKey();
                }
            }
        }
        return res;
    }
}