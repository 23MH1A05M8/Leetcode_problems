class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n=nums.size();
        int totalSum = 0;
        int subSets = 1 << n;
        for(int i = 0 ; i < subSets ; i++){
            int totalXor=0;
            for(int num=0;num<n;num++)
            {
                if((1<<num)&i)
                {
                    totalXor^=nums[num];
                }
            }
            totalSum+=totalXor;
        }
        return totalSum;
    }
};