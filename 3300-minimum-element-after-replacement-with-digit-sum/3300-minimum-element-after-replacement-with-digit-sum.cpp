class Solution {
public:
    int minElement(vector<int>& nums) {
        int n=nums.size();
        int res=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int val=nums[i];
            int s=0;
            while(val!=0)
            {
                int r=val%10;
                s+=r;
                val=val/10;
            }
            res=min(res,s);
        }
        return res;
    }
};