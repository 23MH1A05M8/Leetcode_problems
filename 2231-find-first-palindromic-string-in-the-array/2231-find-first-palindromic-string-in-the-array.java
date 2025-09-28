class Solution {
    public String firstPalindrome(String[] words) {
       int n=words.length;
      for(int i=0;i<n;i++)
      {
        String word=words[i];
        int j=0;
        int k=word.length()-1;
        boolean palindrome=true;
     
      while(j<k)
      {
        if(word.charAt(j)!=word.charAt(k))
        {
            palindrome=false;
            break;
        }
        j++;
        k--;
      }
      
      if(palindrome==true)
      {
        return word;
      }
      }
      return "";
    }
    
}