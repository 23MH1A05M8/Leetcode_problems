class Solution {
public:
    int divide(int dividend, int divisor) {
        if(divisor==-1&&dividend==INT_MIN) return INT_MAX;
        if(dividend==divisor) return 1;
        bool sign= true;
        if(dividend<0&&divisor>=0) sign=false;
        if(dividend>=0 && divisor<0) sign=false;
        long long a=llabs((long long)dividend), b=llabs((long long)divisor);
        long long ans=0;
        while(a>=b)
        {
            int c=0;
            while((b<<(c+1))<=a)
            {
                c++;
            }
            ans+=(1LL<<c);
            a=a-(b<<c);
        }
        // if(ans>=INT_MAX && sign==true) return INT_MAX;
        // if(ans>=INT_MAX && sign==false) return INT_MIN;
        // if(sign==true) return ans;
        return sign ? ans: -ans;
    }
};