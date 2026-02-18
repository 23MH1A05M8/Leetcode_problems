class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int res=0;
        int l=0,h=n-1;
        int mid=0;
        while(l<h)
        {
            mid=(l+h)/2;
            if(mid%2==1) mid--;
            if(nums[mid]!=nums[mid+1])
            {
                h=mid;
            }
            else{
                l=mid+2;
            }
        }
        return nums[l];
    }
};