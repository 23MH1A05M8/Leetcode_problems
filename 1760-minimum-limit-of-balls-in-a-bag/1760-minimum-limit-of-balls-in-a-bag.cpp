class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int n=nums.size();
        long long maxi=*max_element(nums.begin(),nums.end());
        int l=1,h=maxi;
        while(l<=h)
        {
            long long ops=0;
            int mid=(l+h)/2;
            for(long long i=0;i<n;i++)
            {
                if(nums[i]>mid)
                {
                    ops+=(nums[i]-1)/mid;
                }
            }
            if(ops>maxOperations)
            {
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
        }
        return l;
    }
};