class Solution {
public:
    void order(vector<vector<int>>& res,vector<int>&temp, vector<bool>& vis,vector<int>&nums)
    {
        if(nums.size()==temp.size())
        {
            res.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(vis[i]) continue;
            vis[i]=true;
            temp.push_back(nums[i]);
            order(res,temp,vis,nums);
            temp.pop_back();
            vis[i]=false;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;
        vector<bool> vis(nums.size());
        order(res,temp,vis,nums);
        return res;
    }
};