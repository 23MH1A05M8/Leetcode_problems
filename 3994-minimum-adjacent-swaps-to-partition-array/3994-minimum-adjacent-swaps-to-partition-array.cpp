class Solution {
public:
    int minAdjacentSwaps(vector<int>& nums, int a, int b) {
        int n=nums.size();
        int i=0,j=0,k=0;
        long long swaps=0;
        for(int p=0;p<n;p++)
        {
            if(nums[p]<a)
            {
                swaps+=p-i;
                if(i<n) i++;
                if(j<n) j++;
                if(k<n) k++;
            }
            else if(nums[p]>=a&&nums[p]<=b)
            {
                swaps+=p-j;
                if(j<n) j++;
                if(k<n) k++;
            }
            else{
                swaps+=p-k;
                if(k<n) k++;
            }
        }
        int mod=1e9+7;
        return swaps%mod;
    }
};