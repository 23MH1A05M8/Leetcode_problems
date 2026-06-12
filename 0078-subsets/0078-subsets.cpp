class Solution {
public:
    vector<vector<int>> sub(vector<int> &nums,int i,vector<int> v,vector<vector<int>>& res)
    {
        if(nums.size()==i)
        {
            res.push_back(v);
            return res;
        }
        v.push_back(nums[i]);
        res=sub(nums,i+1,v,res);
        v.pop_back();
        res=sub(nums,i+1,v,res);
        return res;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> v;
        vector<vector<int>> res;
        return sub(nums,0,v,res);
    }
};