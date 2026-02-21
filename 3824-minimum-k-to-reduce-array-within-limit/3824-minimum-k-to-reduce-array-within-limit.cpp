class Solution {
public:
    int minimumK(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        long long l=0,h=1e5+1;
        while(l+1<h)
            {
                long long k=(l+h)/2;
                int c=0;
                for(int i=0;i<n;i++)
                {
                    if(nums[i]%k==0)
                    {
                        c=c+nums[i]/k;
                    }
                    else{
                        c=c+(nums[i]/k)+1;
                    }
                }
                if(c<=1LL*k*k)
                {
                    h=k;
                }
                else{
                    l=k;
                }
            }
        return h;
    }
};