class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int lo=-1,lt=-1;
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                lo=i;
                if(lt!=-1)
                {
                    mini=min(mini,abs(lo-lt));
                }
            }
            if(nums[i]==2)
            {
                lt=i;
                if(lo!=-1)
                {
                    mini=min(mini,abs(lo-lt));
                }
            }
        }
        if(mini==INT_MAX)
        {
            return -1;
        }
        return mini;
    }
};