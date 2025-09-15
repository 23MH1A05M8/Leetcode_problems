class Solution {
    public int canBeTypedWords(String text, String brokenLetters) {
        HashSet<Character> set=new HashSet<>();
        String[] words=text.split(" ");
        for(char let:brokenLetters.toCharArray())
        {
            set.add(let);
        }
        int c=0;
        for(String word:words)
        {
            boolean res=true;
            for(char w:word.toCharArray()){
            if(set.contains(w))
            {
                res=false;
                break;
            }
            }
            if(res)
            {
                c++;
            }
        }
        return c;
    }
}