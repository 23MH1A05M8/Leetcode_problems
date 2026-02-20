class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int l=0,h=n-1;
        if(l!=nums[l]) return 0;
        if(h==nums[h]) return h+1;
        while(l+1<h){
            int mid=(l+h)/2;
            if(nums[mid]==mid) l=mid;
            else h=mid;
        }
        return l+1;
    }
};