class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX,maxi=INT_MIN;
        int minind=0;
        int maxind=0;
        for(int i=0;i<n;i++)
        {
            int temp1=mini;
            mini=min(mini,nums[i]);
            if(mini==nums[i])
            {
                minind=i;
            }
            int temp2=maxi;
            maxi=max(maxi,nums[i]);
            if(maxi==nums[i])
            {
                maxind=i;
            }
        }
        // cout<<minind<<" "<<maxind<<endl;
        int r=max(minind,maxind);
        int f=min(minind,maxind)+1;
        int b=n-r;
        int r2=n-min(minind,maxind);
        // cout<<r+1<<" "<<r2<<" "<<(f+b)<<endl;
        return min({r+1,r2,f+b});
    }
};