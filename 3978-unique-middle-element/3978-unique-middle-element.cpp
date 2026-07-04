class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        map<int,int> m;
        int n=nums.size();
        for(int i=0;i<n;i++)
            {
                m[nums[i]]++;
            }
        for(auto mp:m)
            {
                if(mp.first==nums[n/2])
                {
                    if(mp.second==1)
                    {
                        return true;
                    }
                }
            }
        return false;
    }
};