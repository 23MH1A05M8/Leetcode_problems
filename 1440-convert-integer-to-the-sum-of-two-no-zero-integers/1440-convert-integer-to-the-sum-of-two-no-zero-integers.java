class Solution {
    public int[] getNoZeroIntegers(int n) {
        int[] res=new int[2];
        for(int i=1;i<n;i++)
        {
            int left=i;
            int right=n-i;
            String l=Integer.toString(left);
            String r=Integer.toString(right);
            if(!l.contains("0")&& !r.contains("0"))
            {
                res[0]=left;
                res[1]=right;
                break;
            }
        }
        return res;
    }
}