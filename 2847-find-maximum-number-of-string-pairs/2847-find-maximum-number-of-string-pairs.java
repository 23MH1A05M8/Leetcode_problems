class Solution {
    public int maximumNumberOfStringPairs(String[] words) {
        HashMap<String,Integer> map=new HashMap<>();
         int c=0;
        for(String s:words)
        {
            String sb=new StringBuilder(s).reverse().toString();
            // Collections.swap(s);
            if(map.containsKey(sb)&&map.get(sb)>0){
                c++;
                map.put(sb,map.get(sb)-1);
            }
            else
            {
                map.put(s,map.getOrDefault(s,0)+1);
            }
        } 
        return c;
    }
}