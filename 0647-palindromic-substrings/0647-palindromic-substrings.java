class Solution {
    public static boolean palcount(String str)
    {
        String st=new StringBuilder(str).reverse().toString();
        return str.equals(st);
    }
    public int countSubstrings(String s) {
        int c=0;
        for(int i=0;i<s.length();i++)
        {
            for(int j=i;j<s.length();j++)
            {
                String str=s.substring(i,j+1);
                if(palcount(str))
                {
                    c++;
                }
            }
        }
        return c;
    }
}