class Solution {
public:
    int sumCounts(vector<int>& nums) {
        // set<int> s;
        int res=0;
        for(int i=0;i<nums.size();i++)
        {
            set<int> s;
            for(int j=i;j<nums.size();j++){
                s.insert(nums[j]);
                res+=(s.size()*s.size());
            }
        }
        return res;
    }
};