class Solution {
    public int differenceOfSums(int n, int m) {
       int c=0,s=0;
        for(int i=1;i<=n;i++)
        {
            if(i%m!=0)
            {
                c=c+i;
            }
            else
            {
                s=s+i;
            }
        }
        return c-s;
    }
}