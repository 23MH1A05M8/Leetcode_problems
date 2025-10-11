class Solution {
    public String[] sortPeople(String[] names, int[] heights) {
        TreeMap<Integer,String> map=new TreeMap<>();
        int n=heights.length;
       String[] res=new String[n];
       for(int i=0;i<heights.length;i++)
       {
            map.put(heights[i],names[i]);
       }
       int index=0;
        for(String s:map.values())
        {
           res[index++]=s;
        }
         String[] result=new String[n];
         int ind=0;
        for(int i=res.length-1;i>=0;i--)
        {
            result[ind++]=res[i];
        }
        return result;
    }
}