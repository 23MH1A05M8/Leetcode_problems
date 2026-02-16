class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        int n=nums.size();
        map<int,int> m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        map<int,int> m1;
        for(auto mp:m)
        {
            m1[mp.second]++;
        }
        for(int i=0;i<n;i++)
        {
            if(m1[m[nums[i]]]==1)
            {
                return nums[i];
            }
        }
        return -1;
    }
};