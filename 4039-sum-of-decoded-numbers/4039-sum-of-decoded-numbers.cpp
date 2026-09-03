class Solution {
public:
    long long mod=1e9+7;
    long long power(long long x,long long y)
    {
        if(y==0) return 1;
        long long p=power(x,y/2);
        if(y%2==0) return (p*p)%mod;
        else return (((x*p)%mod)*p)%mod;
    }
    int sumDecoded(vector<long long>& nums) {
        int n=nums.size();
        // string s=to_string()
        long long sum=0;
        for(int i=0;i<n;i++)
            {
                string s=to_string(nums[i]);
                int width=s[s.size()-1]-'0';
                // int d=stoi(s.back());
                string x=s.substr(0,width);
                string y=s.substr(width,s.size()-width-1);
                long long x1=stoll(x);
                long long y1=stoll(y);
                long long p=power(x1,y1);
                sum=(sum+p)%mod;
            }
        return (int)sum;
    }
};