class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0) return 0;
        string x="";
        long long sum=0;
        while(n!=0)
        {
            int r=n%10;
            // cout<<r<<endl;
            if(r!=0){
                x+=(r+'0');
                sum+=r;
            }
            n/=10;
        }
        reverse(x.begin(),x.end());
        long long res=stoi(x)*sum;
        return res;
    }
};