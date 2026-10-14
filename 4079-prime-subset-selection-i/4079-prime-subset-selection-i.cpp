class Solution {
public:
    bool primes(int n){
        if(n<2) return false;
        if(n==2) return true;
        if(n%2==0) return false;
        for(int i=3;i*i<=n;i++)
        {
            if(n%i==0) return false;
        }
        return true;
    }
    vector<int> maxPrimes(int n, int s) {
        long long sum=0;
        vector<int> res;
        for(int i=2;i<=n;i++)
        {
            if(primes(i)){
                if(sum+i<=s){
                    sum+=i;
                    res.push_back(i);
                }
                else break;
            }
        }
        return res;
    }
};