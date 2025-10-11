class Solution {
    public int countSeniors(String[] details) {
        int c=0;
        for(String word:details)
        {
            String res="";
            int n=word.length();
            for(int i=11;i<13;i++)
            {
                res+=word.charAt(i);
            }
            System.out.println(Integer.parseInt(res));
            if(Integer.parseInt(res)>60)
            {
                c++;
            }
        }
        return c;
    }
}