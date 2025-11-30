class Solution {
    public int numberOfSteps(int num) {
        int s=0;
        while(num!=0)
        {
            if(num%2==0)
            {
                s=s+1;
                num=num/2;
            }
            else
            {
                s=s+1;
                num=num-1;
            }
        }
        return s;
    }
}