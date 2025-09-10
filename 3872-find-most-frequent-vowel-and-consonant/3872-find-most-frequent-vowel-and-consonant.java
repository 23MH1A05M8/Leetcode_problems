class Solution {
    public int maxFreqSum(String s) {
        HashMap<Character,Integer> map=new HashMap<>();
        for(char ch:s.toCharArray())
        {
            map.put(ch,map.getOrDefault(ch,0)+1);
        }
        int v=0;
        int c=0;
        for(Map.Entry<Character,Integer> j:map.entrySet())
        {
            if(j.getKey()=='a'||j.getKey()=='e'||j.getKey()=='i'||j.getKey()=='o'||j.getKey()    =='u')
            {
                v=Math.max(v,j.getValue());
            }
            else
            {
                 c=Math.max(c,j.getValue());
            }
        }
        return v+c;
    }
}