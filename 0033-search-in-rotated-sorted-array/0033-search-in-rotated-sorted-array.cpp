class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0,h=n-1;
        while(l<=h)
        {
            int mid=(l+h)/2;
            if(nums[mid]==nums[n-1]){
                l=mid;
                break;
            }
            if(nums[mid]>nums[n-1])
            {
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        cout<<l<<endl;
        int high=n-1;
        if(l==0){
            if(n==1)
            {
                high=l;
            }
            else{
                high=n-1;
            }
        }
        else
        {
            high=l-1;
        }
        cout<<high<<endl;        
        if(nums[l]==target) return l;
        if(nums[high]==target) return high;
        if(nums[n-1]==target) return n-1;
        if(nums[0]==target) return 0;
        // if(target<nums[high])
        // {
            if(target<nums[n-1])
            {
                int left=l,right=n-1;
                while(left+1<right)
                {
                    int mid=(left+right)/2;
                    if(nums[mid]==target) return mid;
                    if(nums[mid]>target)
                    {
                        right=mid;
                    }
                    else{
                        left=mid;
                    }
                }
            }
            else
            {
                int left=0,right=high;
                while(left+1<right)
                {
                    int mid=(left+right)/2;
                    if(nums[mid]==target) return mid;
                    if(nums[mid]>target)
                    {
                        right=mid;
                    }
                    else{
                        left=mid;
                    }
                }
            }
        // }
        
        return -1;
    }
};