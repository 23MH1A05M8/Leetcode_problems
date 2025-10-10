class Solution {
    public String truncateSentence(String s, int k) {
        String[] words=s.split(" ");
        String res="";
        int c=0;
        for(String word:words)
        {
            if(c<k)
            {
                res+=word+" ";
                c++;
                // System.out.println(word);
            }
        }
        return res.trim();
    }
}