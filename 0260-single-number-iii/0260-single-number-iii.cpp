class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long xorall=0;
        for(int i=0;i<nums.size();i++)
        {
            xorall^=nums[i];
        }
        long long rightbit=(xorall&(-xorall));
        int u1=0,u2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(rightbit&nums[i]) u1^=nums[i];
            else u2^=nums[i];
        }
        return {u1,u2};
    }
};