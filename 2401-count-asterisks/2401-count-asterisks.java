class Solution {
    public int countAsterisks(String s) {
        int c=0;
        boolean paired=false;
        for(char ch:s.toCharArray())
        {
            if(ch=='|')
            {
                paired=!paired;
            }
            if(ch=='*'&&!paired)
            {
                c++;
            }
        }
        return c;
    }
}