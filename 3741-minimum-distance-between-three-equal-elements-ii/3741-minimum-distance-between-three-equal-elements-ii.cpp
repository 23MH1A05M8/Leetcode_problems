class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,vector<int>> m;
        int mini=INT_MAX;
        for(int i=0;i<n;i++)
        {
            m[nums[i]].push_back(i);
            if(m[nums[i]].size()>=3)
            {
                int s=m[nums[i]].size();
                int f=m[nums[i]][s-3];
                int t=m[nums[i]][s-1];
                int r=2*(t-f);
                mini=min(mini,r);
            }
        }
        return (mini==INT_MAX) ? -1 : mini;
    }
};