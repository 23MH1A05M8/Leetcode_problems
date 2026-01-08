class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        int c=0,j=0;
        while(mp.size()!=n-j)
        {
            int r=min(3,n-j);
            for(int k=0;k<r;k++){
                mp[nums[j]]--;
                if(mp[nums[j]]==0)
                {
                    mp.erase(nums[j]);
                }
                j++;
            }
            c++;
        }
        return c;
    }
};