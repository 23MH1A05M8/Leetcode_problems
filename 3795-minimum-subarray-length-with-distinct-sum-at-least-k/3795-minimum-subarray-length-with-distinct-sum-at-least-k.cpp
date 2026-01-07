class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int s=0,mini=INT_MAX;
        int left=0;
        for(int right=0;right<nums.size();right++)
        {
            mp[nums[right]]++;
            if(mp[nums[right]]==1)
            {
                s+=nums[right];
            }
            while(s>=k)
            {
                mini=min(mini,right-left+1);
                mp[nums[left]]--;
                if(mp[nums[left]]==0)
                {
                    s-=nums[left];
                }
                left++;
            }
        }
        return mini==INT_MAX?-1:mini;
    }
};