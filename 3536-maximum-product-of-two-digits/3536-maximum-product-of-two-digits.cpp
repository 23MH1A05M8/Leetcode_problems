class Solution {
public:
    int maxProduct(int n) {
        int maxi1=0,maxi2=0;
        while(n!=0)
        {
            int r=n%10;
            if(maxi2<r) maxi2=r;
            if(maxi1<maxi2)
            {
                int s=maxi1;
                maxi1=maxi2;
                maxi2=s;
            }
            n=n/10;
        }
        return maxi1*maxi2;
    }
};