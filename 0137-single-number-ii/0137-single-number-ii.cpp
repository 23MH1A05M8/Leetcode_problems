class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<32;i++)
        {
            int c=0;
            for(int num:nums)
            {
                if((num>>i)&1)
                {
                    c++;
                }
            }
            if(c%3)
            {
                // cout<<ans<<endl;
                ans|=(1<<i);
            }
        }
        return ans;
    }
};