class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> pre;
        vector<int> suf(nums.size());
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            maxi=max(maxi,nums[i]);
            pre.push_back(maxi);
            // cout<<pre[i]<<" ";
        }
        // cout<<endl;
        for(int i=nums.size()-1;i>=0;i--)
        {
            mini=min(mini,nums[i]);
            suf[i]=mini;
            // cout<<mini<<" ";
        }
        // cout<<endl;
        for(int i=0;i<nums.size();i++)
        {
            // cout<<pre[i]<<" "<<suf[i]<<endl;
            int r=pre[i]-suf[i];
            if(r<=k)
            {
                return i;
            }
        }
        return -1;
    }
};