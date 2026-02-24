class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int l=0,h=n-1;
        while(l<=h)
        {
            int mid=(l+h)/2;
            if(nums[mid]==nums[n-1]) return nums[n-1];
            if(nums[mid]>nums[n-1])
            {
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
        }
        return nums[l];
    }
};