class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int left=0,right=n-1;
        vector<int> v(2,-1);
        int re=-1;
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(nums[mid]==target)
            {
                re=mid;
                right=mid-1;
            }
            else if(nums[mid]<target)
            {
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        v[0]=re;
        int res=-1;
        int l=0,r=n-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(nums[mid]==target)
            {
                res=mid;
                l=mid+1;
            }
            else if(nums[mid]<target)
            {
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        v[1]=res;
        return v;
    }
};