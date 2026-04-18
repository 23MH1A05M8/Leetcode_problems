class Solution {
public:
    int mirrorDistance(int n) {
        int num=n;
        int r=0;
        while(n!=0)
            {
                int res=n%10;
                r=r*10+res;
                n=n/10;
            }
        return abs(num-r);
    }
};