class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int n=nums.size();
        int subset=(1<<n);
        int totalSubset=0;
        int maxOR=0;
        for(int i=0;i<n;i++)
        {
            maxOR|=nums[i];
        }
        for(int i=0;i<subset;i++)
        {
            int currOR=0;
            for(int num=0;num<n;num++)
            {
                if((1<<num)&i)
                {
                    currOR|=nums[num];
                }
            }
            if(maxOR==currOR) totalSubset++;
        }
        return totalSubset;
    }
};