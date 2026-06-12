class Solution {
public:
void sub(vector<int>& nums,int ind, vector<int>& v,vector<vector<int>>& ans)
{
    ans.push_back(v);
    for(int i=ind;i<nums.size();i++)
    {
        if(i!=ind&&nums[i]==nums[i-1]) continue;
        v.push_back(nums[i]);
        sub(nums,i+1,v,ans);
        v.pop_back();
    }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        // set<vector<int>> res;
        sort(nums.begin(),nums.end());
        vector<int> v;
        vector<vector<int>> ans;
        sub(nums,0,v,ans);
        return ans;
    }
};