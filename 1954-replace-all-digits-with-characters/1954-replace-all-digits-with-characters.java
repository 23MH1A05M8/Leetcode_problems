class Solution {
    public String replaceDigits(String s) {
        StringBuilder res=new StringBuilder();
         for(int i=0;i<s.length();i++)
         {
            if(i%2==0)
            {
                res.append(s.charAt(i));
            }
            else
            {
                char r=(char)(s.charAt(i-1)+(s.charAt(i)-'0'));
                res.append(r);
            }
         }
         return res.toString();
    }
}