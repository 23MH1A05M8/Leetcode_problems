class Solution {
    public int vowelStrings(String[] words, int left, int right) {
       String vowels="aeiou" ;
       int c=0;
       for(int i=left;i<=right;i++)
       {
            String word=words[i];
            char fir=word.charAt(0);
            char las=word.charAt(word.length()-1);
            if(vowels.contains(String.valueOf(fir))&&vowels.contains(String.valueOf(las)))
            {
                c++;
            }
       }
       return c;
    }
}