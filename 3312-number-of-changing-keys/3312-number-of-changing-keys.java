class Solution {
    public int countKeyChanges(String s) {
        HashSet<Character> set=new HashSet<>();
        String res=s.toLowerCase();
        char[] word=res.toCharArray();
        int c=0;
        for(int i=0;i<word.length-1;i++)
        {
            // char w=word.charAt(i);
            if(word[i]!=word[i+1])
            {
                c++;
            }
        }
        return c;
    }
}