class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,pair<int,int>> occ;
        unordered_map<int,int> frq;
        int n=nums.size();
        for(int i=0;i<n;i++)
            {
                if(occ.find(nums[i])==occ.end())
                {
                    occ[nums[i]]={i,i};
                }
                else{
                    occ[nums[i]].second=i;
                }
                frq[nums[i]]++;
            }
        int res=0;
        for(auto mp:occ)
            {
                int focc=mp.second.first;
                int locc=mp.second.second;
                int tocc=frq[mp.first];
                if(locc-focc+1==tocc)
                {
                    res++;
                }
            }
        return res;
    }
};