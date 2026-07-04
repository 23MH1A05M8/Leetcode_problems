class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> v(n);
        v[0]=nums[0];
        for(int i=1;i<n;i++)
            {
                 v[i]=max(v[i-1],nums[i]);
            }
        int res=INT_MIN;
        for(int i=k;i<n;i++)
            {
               res=max(res,v[i-k]+nums[i]); 
            }
        return res;
    }
};