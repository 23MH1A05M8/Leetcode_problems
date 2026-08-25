class Solution {
public:
    bool checkDivisibility(int n) {
        int o=n;
        int sum=0,pro=1,total=0;
        while(o!=0)
        {
            int r=o%10;
            sum+=r;
            pro*=r;
            o/=10;
        }
        total=sum+pro;
        if(n%total==0) return true;
        return false;
    }
};