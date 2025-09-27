class Solution {
    public boolean isHappy(int n) {
        int c;
        while(n != 1 && n != 4){
            c=0;
        while(n!=0)
        {
            int r=n%10;
            c=c+(r*r);
            n=n/10;
        }
        n=c;
        
        }
        if(n!=1)
        {
            return false;
        }
        else
        {
            return true;
        }
        
    }
}