class Solution {
public:
    double calpow(double x,long long n){
        if(n==0) return 1.0;
        if(n==1) return x;
        if(n%2==0){
            return calpow(x*x , n/2);
        }
        return x * calpow(x, n - 1);
    }
    double myPow(double x, int n) {
        long long num=n;
        if(num<0)
        {
            return 1.0/calpow(x,-num);
        }
        return calpow(x,num);
    }
};